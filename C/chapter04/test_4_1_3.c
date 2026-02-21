/*
    제작 시간 : 0221_18:11
    유형 : 연습
    제목 : p127 3번

    문제 설명) : 태희가 신청한 전체 학점과 평점을 계산해 시청 학점이 10학점 이상이고 평점 평균이 4.0을 넘는 경우 1출력, 아니면 0출력
    - 국어 kor , 영어 eng , 수학 mat , 전체 학점 credits , 결과 저장 res , 국어 평점 ksocre , 영어 평점 escore , 수학평점 msores, 평점 평균 grade
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
    int kor = 0;
    int eng = 0;
    int mat = 0;
    int credits = 0;
    int res = 0;
    double kscore = 0;
    double escore = 0;
    double mscore = 0;
    double grade = 0;

    /*        입 력       */
    kor = 3;
    eng = 5;
    mat = 4;
    credits = kor + eng + mat;
    kscore = 3.8;
    escore = 4.4;
    mscore = 3.9;
    grade = (kscore + escore + mscore) / 3.0;

    /*        처 리       */
    res = (credits >= 10 && grade >= 4.0) ? 1 : 0;
    printf("결과 : %d\n", res);

    /*        출 력       */

    /* 함수 종료 */
    return 0;
}

/* 함수 정의 공간 */
