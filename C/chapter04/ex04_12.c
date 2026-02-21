/*
    제작 시간 : 0221_17:44
    유형 : 예제
    제목 : 조건 연산자

    개념) :
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
    int a, b, res;

    /*        입 력       */
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    /*        처 리       */
    if (a > b)
    {
        res = a;
    }
    else
    {
        res = b;
    }
    // 압축형
    // res = (a > b) ? a : b;

    /*        출 력       */
    printf("res : %d\n", res);

    /* 함수 종료 */
    return 0;
}

/* 함수 정의 공간 */
