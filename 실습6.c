// w2-p6-변수 x와 y에 각각 정수를 저장하고, 가감승제를 출력하는 프로그램

#include <stdio.h>

int main(void)
{
    int x = 20 ;
    int y = 10 ;

    int a = x + y ;
    int b = x - y ;
    int c = x * y ;
    int d = x / y ;

    printf("두수의 합:%d\n", a) ;
    printf("두수의 차:%d\n", b) ;
    printf("두수의 곱:%d\n", c) ;
    printf("두수의 몫:%d\n", d) ;

    return 0 ;
}