// w2-p7-사용자가 연봉을 입력하면 월 수령액을 계산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int y_salary ;
    printf("연봉을 입력하시오(단위: 만원): ") ;
    scanf("%d", &y_salary) ;

    int m_salary ;
    m_salary = y_salary / 12 ;
    printf("월수령액(단위: 만원):%d\n", m_salary) ;
    
    return 0 ;
}