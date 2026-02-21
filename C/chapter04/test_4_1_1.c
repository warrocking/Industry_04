/*
    제작 시간 : 0221_18:04
    유형 : 연습
    제목 : p125 1번

    문제 설명) : 4.0과 1.2를 덧셈, 뺄셈, 곱셈, 나눗셈한 값을 소수점 이하 첫째 자리까지 출력되도록
    -
    -
    -
    -
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

// 기본 헤더 파일
#include <stdio.h>  // 입출력               // printf("%d\n", x); scanf("%d", &x);
#include <string.h> // 문자열               // strlen, strcmp, strcpy, strncpy, strcat, strncat, memset // 예: strcpy(dst, src);
#include <stdlib.h> // 메모리/변환/유틸      // malloc, calloc, free, atoi, strtol, qsort, bsearch, rand, srand // 예: int* p = malloc(sizeof(int) * n);

// 추가 헤더 파일 (필요 시 주석 제거 후 사용)
// #include <math.h>      // 수학              // sqrt, pow, fabs, floor, ceil // 예: double r = sqrt(x);
// #include <ctype.h>     // 문자 판별/변환     // isdigit, isalpha, isspace, tolower, toupper // 예: if (isdigit(c)) ...
// #include <stdbool.h>   // bool 타입(C99+)    // bool ok = true;
// #include <time.h>      // 시간/난수 시드      // time, clock // 예: srand((unsigned)time(NULL));

/* 함수 선언 공간 */
// ------- 시작 ----------

// ------ 끝 ----------

/* 메인 함수 정의 */
int main(void)
{
    /* 변수 선언 및 초기화 */
    double a = 4.0;
    double b = 1.2;

    /*        입 력       */

    /*        처 리       */

    /*        출 력       */
    printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
    printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
    printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
    printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);

    /* 함수 종료 */
    return 0;
}

/* 함수 정의 공간 */
