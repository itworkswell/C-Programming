// w2-p9-사용자가 입력하는 값을 바탕으로 사각형의 넓이와 둘레를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
    double w ;
    double h ;
    double area ;
    double perimeter ;

    printf("사각형의 가로길이를 입력하시오 : ") ;
    scanf("%lf", &w) ;

    printf("사각형의 세로길이를 입력하시오 : ") ;
    scanf("%lf", &h) ;

    // area와 perimeter 정의 순서를 유의하자. w, h 값이 area와 perimeter 값에 영향을 주고있으므로 w와 h를 입력받은 뒤에 계산해줘야 한다.

    area = w * h ;
    perimeter = ( w + h ) * 2 ;

    printf("사각형의 넓이는 %lf입니다.\n", area) ;
    printf("사각형의 둘레는 %lf입니다.\n", perimeter) ;

    return 0;
}