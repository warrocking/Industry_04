/*
    제작 시간 : 0221_18:38
    유형 : 연습
    제목 : p148 도전

    문제 설명
    - 체중과 키를 입력해 BMI를 구한 후 BMI의 값이 20.0 이상 25.0 미만이면 표준, 그 외는 체중관리가 필요합니다 라는 말 출력하는 프로그램
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
    double kg;
    double cm;
    double bmi;

    /*        입 력       */
    printf("몸무게 : ");
    scanf("%lf", &kg);
    printf("키 : ");
    scanf("%lf", &cm);

    /*        처 리       */
    bmi = kg / (cm * cm);

    /*        출 력       */
    if (bmi >= 20.0 && bmi < 25.0)
    {
        printf("표준\n");
    }
    else
    {
        printf("체중관리 필요\n");
    }

    /* 함수 종료 */
    return 0;
}

/* 함수 정의 공간 */
