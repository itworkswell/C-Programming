// w2-p8-사용자가 입력하는 환율에 맞추어 사용자가 입력한 원화를 달러화로 계산하여 출력하는 프로그램
// 원화는 정수형으로 선언한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
    double rate ;
    int krw ;
    double usd ;

    printf("환율을 입력하시오 : ") ;
    scanf("%lf", &rate) ;

    printf("원화를 입력하시오 : ") ;
    scanf("%d", &krw) ;

    usd = krw / rate ;

    printf("원화 %d원은 %lf달러 입니다.\n", krw, usd) ;

    return 0 ;

}