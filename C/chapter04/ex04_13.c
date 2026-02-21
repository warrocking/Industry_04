/*
    제작 시간 : 0221_17:45
    유형 : 예제
    제목 : 비트 연산식의 결과

    개념) :
    - 비트 연산자에서 & 는 논리곱연산이다.
    - 배타적 논리합은 ^ 이다.
    - 피연산자를 각각 비트별 논리합은 |
    - 비트별 부정 연산자는 ~
    - 비트 이동 연산자는 >> , <<
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
    int a = 10; // 비트열 00000000 00000000 00000000 00001010
    int b = 12; // 비트열 00000000 00000000 00000000 00001100

    /*        입 력       */

    /*        처 리       */

    /*        출 력       */
    printf("a & b : %d\n", a & b);   // AND 연산 00000000 00000000 00000000 00001000 -> 8
    printf("a | b : %d\n", a | b);   // OR 연산   00000000 00000000 00000000 00001110 -> 14
    printf("a ^ b : %d\n", a ^ b);   // XOR 연산 00000000 00000000 00000000 00000110 -> 6
    printf("~a : %d\n", ~a);         // NOT 연산 11111111 11111111 11111111 11110101 -> -11 (2의 보수)
    printf("a << 1 : %d\n", a << 1); // 왼쪽 시프트 연산 00000000 00000000 00000000 00010100 -> 20
    printf("a >> 2 : %d\n", a >> 2); // 오른쪽 시프트 연산 00000000 00000000 00000000 00000010 -> 2

    printf("\n");

    a = 10;
    b = 5;
    int res;

    res = a / b * 2;
    printf("res : %d\n", res);
    res = ++a * 3;
    printf("res : %d\n", res);
    res = a > b && a != 5;
    printf("res : %d\n", res);
    res = a % 3 == 0;
    printf("res : %d\n", res);

    /* 함수 종료 */
    return 0;
}

/* 함수 정의 공간 */
