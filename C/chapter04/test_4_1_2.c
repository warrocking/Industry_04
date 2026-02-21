/*
    제작 시간 : 0221_18:08
    유형 : 연습
    제목 : p126 2번

    문제 설명) : 두 과목 점수 입력해 평균 출력하기, 소수점 한자리까지
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
    int a, b;
    int total;  // 총합
    double avg; // 평균

    /*        입 력       */
    printf("두 과목 점수 입력 : ");
    scanf("%d %d", &a, &b);

    /*        처 리       */
    total = a + b;
    avg = total / 2.0;

    /*        출 력       */
    printf("평균 : %.1lf\n", avg);

    /* 함수 종료 */
    return 0;
}

/* 함수 정의 공간 */
