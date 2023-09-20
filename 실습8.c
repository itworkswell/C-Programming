/* IMPORTANT */
// w2-p8-사용자가 입력하는 원화를 달러화로 계산하여 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double rate ; // 원달러 환율
    double usd ; // 달러화
    int krw ; // 원화(원화는 정수형 변수로 선언)

    printf("환율을 입력하시오 :") ;
    scanf("%lf", &rate) ;

    printf("원화금액을 입력하시오 :") ;
    scanf("%d", &krw) ;

    usd = krw / rate ; // 원화를 달러화로 환산

    printf("원화 %d원은 %lf달러입니다.\n", krw, usd) ;

    return 0 ;

}