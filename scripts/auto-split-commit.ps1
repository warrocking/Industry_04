param(
  [switch]$IncludeUnstaged
)

$ErrorActionPreference = "Stop"

# Resolve repo root
$root = (& git rev-parse --show-toplevel).Trim()
if (-not $root) {
  Write-Error "Not inside a git repository."
  exit 1
}
Set-Location $root

# Gather staged files
$stagedAll = & git diff --cached --name-only
if (-not $stagedAll) {
  if (-not $IncludeUnstaged) {
    Write-Error "No staged files. Stage .c files first."
    exit 1
  }
}

if ($IncludeUnstaged) {
  $cFiles = & git ls-files -m -o --exclude-standard -- '*.c'
} else {
  $cFiles = $stagedAll | Where-Object { $_ -match '\.c$' }
  $nonC = $stagedAll | Where-Object { $_ -notmatch '\.c$' }
  if ($nonC) {
    Write-Error "Non-.c files are staged. Unstage them before running auto-split commit."
    $nonC | ForEach-Object { Write-Host "- $_" }
    exit 1
  }
}

if (-not $cFiles) {
  Write-Error "No .c files to commit."
  exit 1
}

# Ensure clean index for split commits
& git reset | Out-Null

$env:CODEX_FORCE_AUTO = "1"

foreach ($file in $cFiles) {
  if (Test-Path $file) {
    & git add -- "$file" | Out-Null
  } else {
    & git rm -- "$file" | Out-Null
  }

  & git commit -m "AUTO" --quiet
  if ($LASTEXITCODE -ne 0) {
    Write-Error "Commit failed for $file"
    exit 1
  }
}

Remove-Item Env:CODEX_FORCE_AUTO -ErrorAction SilentlyContinue
Write-Host "Auto split commit completed: $($cFiles.Count) file(s)."