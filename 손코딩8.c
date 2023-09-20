#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double rate ;
    double usd ;
    int krw ;

    printf("환율을 입력하시오 :") ;
    scanf("%lf", &rate) ;

    printf("원화를 입력하시오 :") ;
    scanf("%d", &krw) ;

    usd = krw / rate ;

    printf("원화 %d원은 %lf달러 입니다.\n", krw, usd) ; // 마지막 printf문에서 줄바꿈!! 까먹지 말자 \n

    return 0;
}   