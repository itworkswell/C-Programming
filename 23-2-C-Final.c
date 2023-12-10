// C-Programming-Final-Answer

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
// T9-37-포인터_연산자_예시-(1)-★★
int main(void)
{
	int i = 3000;
	int *p = NULL;

	p = &i;

	printf("i = %d\n", i);
	printf("&i = %u\n", &i);
	printf("p = %u\n", p);
	printf("*p = %d", *p);

	return 0;
}
*/

/*
// T9-37-포인터_연산자_예시-(2)-★★
int main(void)
{
	int x = 10, y = 20;
	int *p = NULL;

	p = &x;
	printf("p = %u\n", p);
	printf("*p = %d\n", *p);
	
	p = &y;
	printf("p = %u\n", p);
	printf("*p = %d\n", *p);

	return 0;
}
*/

/*
// T9-37-포인터_연산자_예시-(3)-★★
int main(void)
{
	int i = 10;
	int *p = NULL;

	p = &i;
	printf("i = %d\n", *p);
    // i = 10

	*p = 20;
	printf("i = %d\n", *p);
    // i = 20 : 포인터가 가리키는 걸 변경하면 원래것도 바뀐다.

    printf("i = %d\n", i);
    // i = 20

	return 0;
}
*/

/*
// L9-PPT-25p.-★★★★★
int main(void)
{
	char *pc;
	int *pi;
	double *pd;

	pc = (char *)10000;
	pi = (int *)10000;
	pd = (double *)10000;
	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
    //증가 전 pc = 10000, pi = 10000, pd = 10000

	pc++; //char type = 1byte, 그래서 주소값이 1 증가한다.
	pi++; //int type = 4byte , 그래서 주소값이 4 증가한다.
	pd++; //double type = 8byte, 그래서 주소값이 8 증가한다.

	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
    //증가 후 pc = 10001, pi = 10004, pd = 10008

	printf("pc+2 = %d, pi+2 = %d, pd+2 = %d\n", pc + 2, pi + 2, pd + 2);
    //pc+2 = 10003, pi+2 = 10012, pd+2 = 10024

    //포인터 주소(쌩 포인터)를 +n을 하면 +(해당 포인터 자료형 바이트수) * n 된다.

	return 0;
}

// pointer 자체가 잡아먹는 메모리 공간은 항상 4byte 이다.
// 포인터가 int를 가리키든, double을 가리키든, char을 가리키든.. 카더가든, 나가거든, 집가고싶거든
*/

// W10

/*
// ★★★★ CALL-BY-VALUE(값에 의한 호출) to CALL-BY-REFERENCE(참조에 의한 호출)

// W10-P-(38)-call by value(값에 의한 호출)
void swap(int x, int y);

int main(void)
{
	int a = 100, b = 200;
	printf("a=%d b=%d\n", a, b);

	int x = 100, y = 200;
	printf("x=%d y=%d\n", x, y);

	swap(x, y);
	printf("x=%d y=%d\n", x, y);
	printf("a=%d b=%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;

}

// W10-P-(38)-call by reference
void swap(int *px, int *putchar_unlocked);

int main(void)
{
	int a = 100, b = 200;
	printf("a=%d b=%d\n", a, b);

	int x = 100, y = 200;
	printf("x=%d y=%d\n", x, y);

	swap(&a, &b);
	printf("x=%d y=%d\n", x, y);
	printf("a=%d b=%d\n", a, b);

	return 0;
}

void swap(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
*/

/*
//W10-P-(39)
int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("a = %u\n", a);
    // 배열 a의 주소가 출력된다
	printf("a + 1 = %u\n", a + 1);
    // 배열은 포인터고, 포인터가 배열이다. 즉 a + 1 은 a의 자료형 크기만큼 더한만큼의 새로운 주소가 나오는 것이니라
	printf("*a = %d\n", *a);
    // 배열의 값, 즉 첫번째 인수값을 보여준다
	printf("*(a+1) = %d\n", *(a + 1));
    // 배열의 값에서 두번쨰, 즉 두번재 인수값을 보연준다
    // 단 *a + 1 이었다면, *a = 10 이므로, 11이 출력됨
	return 0;
}
*/

/*
// W10-P-39-3
void sub(int b[]);

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	int *p;

	p = a; // 포인터 p와 배열 a의 주소를 같게 만들어 버렸다.
	printf("[a]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
	printf("p[0] = %d p[1]=%d p[2]=%d \n", p[0], p[1], p[2]);

	sub(a);

    //p[0] = 60;
	//p[1] = 70;
	//p[2] = 80;

	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
	return 0;
}

void sub(int b[])
{
	b[0] = 60;
	b[1] = 70;
	b[2] = 80;
}
*/

/*
// W10-P-40-JONNA 어렵네
#define SIZE 5

void print_image(int image[][SIZE])
{
    int r, c;
    for (r=0 ; r < SIZE ; r++)
    {
        for(c=0 ; c<SIZE ; c++)
        {
            printf("%03d ", image[r][c]);
        }
        printf("\n");
    }
    printf("\n");
}

void brighten_image(int image[][SIZE])
{
    int r,c;
    int *p;
    p = &image[0][0];

    for (r = 0 ; r < SIZE ; r++ ) 
    {
        for(c = 0 ; c < SIZE ; c++)
        {
            *p += 10;
            p ++ ;
        }
    }
}

int main(void)
{
    int image[5][5] = {
        { 10, 20, 30, 40, 50 },
        { 10, 20, 30, 40, 50 },
        { 10, 20, 30, 40, 50 },
        { 10, 20, 30, 40, 50 },
        { 10, 20, 30, 40, 50 }
    };

    print_image(image);
    brighten_image(image);
    print_image(image);

    return 0;

}
*/

/*
// 영상처리 연습용
#define SIZE 5

print_image(int image[SIZE][SIZE]);
brighten_image(int image[SIZE][SIZE]);

int main(void)
{
    int image[5][5] = {
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50}
    };
    print_image(image);
    brighten_image(image);
    print_image(image);
    return 0;
}

print_image(int image[SIZE][SIZE])
{
    int r, c;

    for (r = 0 ; r < SIZE ; r++)
    {
        for ( c = 0 ; c < SIZE ; c++)
        {
            printf("%03d ", image[r][c]);
        }
        printf("\n");
    }
    printf("\n");
}

brighten_image(int image[SIZE][SIZE])
{
    int r, c;
    int *p; // 포인터 변수 선언
    p = &image[0][0]; // 포인터 p에 배열 image의 0행 0열 할당

    for(r=0;r<SIZE;r++)
    {
        for ( c = 0 ; c < SIZE ; c++)
        {
            *p += 10; // 0행0열부터 10 증가시키기
            p++; // 0행0열을 가리키던 p를 한칸 증가시키기
        }
    }
}
*/

/*
영상처리는 포인터로 이미지 배열의 0행 0열을 받는거를 핵심으로 한다.
그리고 %03d 로 세자리 정수로 받는거하고,
배열을 프린트하거나 바꿀때는 정수 r, c 선언하고 for문 활용해서 r행 c열로 처리하자.
*/

// 여기부터 

/*
// W10-T-53-(1)
// 이중 포인터 예시
int main(void)
{
	int i = 100;
	int *p = &i;
	int **q = &p;

	*p = 200;
	printf("i=%d\n", i);

	**q = 300;
	printf("i=%d\n", i);

	return 0;
}
*/

/*
// W10-T-53-(2)
// 배열 포인터 예시
int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int(*pa)[5];
	int i;

	pa = &a;
	for (i = 0; i < 5; i++)
		printf("%d\n", (*pa)[i]);
	return 0;
}
*/

/*
// W10-T-53-(3)
// 함수 포인터 예시
int add(int, int);
int sub(int, int);

int main(void)
{
	int result;
	int (*pf)(int, int);

	pf = add;
	result = pf(10, 20);
	printf("10+20은 %d\n", result);

	pf = sub;
	result = pf(10, 20);
	printf("10-20은 %d\n", result);

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}
*/

/*
// W10-T-53-(4) ★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★
// 함수 포인터 예시
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main(void)
{

	int choice, result, x, y;
	int (*pf[4])(int, int) = { add, sub, mul, div };

	printf("메뉴를 선택하시오:");
	scanf("%d", &choice);

	if (choice < 0 || choice >= 4)
    {
		break;
    }

	printf("2개의 정수를 입력하시오:");
	scanf("%d %d", &x, &y);

	result = pf[choice](x, y);
	printf("연산 결과 = %d\n", result);

	
	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}
*/

// 그다음주꺼

#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
// T-42-1-문자열 길이 계산
int main(void)
{
	char str[30] = "Hongik University Computer";
	int i = 0;

	while (str[i] != 0)
		i++;

	printf("문자열 \"%s\"의 길이는 %d입니다.\n", str, i);

	return 0;
}
*/

/*
// T-42-2-대소문자변환
int main(void)
{
	int c;
	c = getchar(); // scanf의 기능이지만 문자열을 받아준다~

	if (islower(c))
		c = toupper(c);

	putchar(c);

	return 0;
}
*/

/*
// T-42-3-문자열 비교
int main(void)
{
	char c1[80], c2[80];
	printf("첫번째 단어를 입력하시오.");
	scanf("%s", &c1);

	printf("두번째 단어를 입력하시오.");
	scanf("%s", &c2);

	r = strcmp(c1, c2);

	 수정 할 것
		printf("%s가 %s보다 앞에 있습니다.", c1, c2);
	else
		printf("%s가 %s보다 앞에 있습니다.", c2, c1);

	return 0;
}
*/

/*
int main(void)
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i;
	printf("원본 문자열=%s\n", src);

	strcpy(dst, src);
	---
	strcpy로 같은 기능을 구현할 수 있다... 고 하네요..
	
	for (i = 0; src[i] != '0'; i++)
		dst[i] = src[i];
	dst[i] = '\0';
	----

	printf("복사된 문자열=%s\n", dst);

	return 0;
}
*/

// 실행하는법
/*
cmd에서 cd (주소) 입력한 뒤에, 파일 이름(확장자 없이) 적으면 됨
그러면 주소는 어떻게 찾냐. 프로젝트파일가서 x64 > Debug > exe파일 있는곳 주소 복사하면 댐
*/

/*
//★★★★★★★★★★★★
// T-43-반복문을 이용해서 파일이름 자동생성
int main(void)
{

	char filename[100];
	char s[100];
	int i;

	for (i = 0; i < 6; i++)
	{
		
		strcpy(filename, "image");
		sprint(s, "%d", i);
		strcat(filename, s);
		strcat(filename, ".jpg");
		printf("%s \n", filename);

	}

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 12주차 - 구조체(Structure)에 관하여

/*
// 구조체 사용 예시 ★★★★★★★

struct student // 구조체 선언
{
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s; // 구조체 변수(s) 선언

	//구조체 멤버 참조
	// (구조체 변수).(구조체 멤버) = (값)
	s.number = 20190001;
	strcpy(s.name, "홍길동");
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
	
	return 0;
}
*/

/*
// 구조체 배열 예시★★★★★★★
#define SIZE 3

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("student_num: ");
		scanf("%d", &list[i].number);

		printf("name: ");
		scanf("%s", list[i].name);

		printf("grade: ");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("stduent_num: %d, name: %s, grade: %f\n", list[i].number, list[i].name, list[i].grade);
	}

	return 0;
}
*/

/*
// 구조체를 가리키는 포인터 예시★★★★★★★
// 포인터를 통한 구조체 참조

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s = { 20070001, "이윤규", 0.0 };
	struct student* p;

	p = &s;

	printf("학번=%d 이름=%s 학점=%f \n", s.number, s.name, s.grade);
	printf("학번=%d 이름=%s 학점=%f \n", (*p).number, (*p).name, (*p).grade);
	printf("학번=%d 이름=%s 학점=%f \n", p->number, p->name, p->grade);

	return 0;
}
*/

// 실습 51의 typedef 사용법을 보면 편할거같습니다. 시험필수는 아닌데, typedef { 구조체 정의 } 이름 < --  이렇게 하면 편하게 쓸 수 잇습니다.
// 실습 60 - 다중실습파일
