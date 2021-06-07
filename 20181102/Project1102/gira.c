// 진도: 382~410
// static 변수는 초기화가 자동적으로 한 번만 된다
// auto 변수는 초기화 되지 않고 값을 모른다

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void hello1(void);
//void hello2(void);
//void auto_gold(void);
//void static_money(void);
//void banana(int);

int *sum(int a, int b);

//int a = 10; // 전역변수 a 값에 10 저장

void main()
{
	int *p;
	
	p = sum(7206, 7213);
	printf("두 정수의 합 : %d\n", *p);

	/*int i;

	printf("auto 지역 변수를 사용한 함수\n");
	for (i = 0; i < 4; i++) {
		auto_gold();
	}

	printf("static 지역 변수를 사용한 함수\n");
	for (i = 0; i < 10; i++) {
		static_money();
	}*/

	/*a = 2; // 전역변수 a 값에 2 저장, main문 안에서만 존재하는 a

	printf("함수 호출 NO: %d\n", a);

	hello1();
	hello2();

	printf("함수 호출 YES: %d\n", a);*/

	/*double a = 3.5, b = 7.5;

	printf("교환 전: %2lf, %2lf\n", a, b);
	{
		double temp;

		temp = a; // temp 값에 3.5 저장
		a = b; // a 값에 7.5 저장
		b = temp; // b 값에 3.5 저장

		printf("%2lf\n", temp);

	}
	printf("교환 후: %2lf, %2lf\n", a, b);*/

	system("pause");
}

/*void hello1(void)
{
	int a = 40; // 지역변수 a 값에 40 저장, hello1이라는 함수에서만 존재하는 a 값
}

void hello2(void)
{
	a = 30; // 전역변수 a 값에 30 저장
}*/

/*void auto_gold(void) {
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_money(void) {
	static int a;

	a++;
	printf("%d\n", a);
}*/

/*void banana(int b)
{
	b = b + 20;
}*/

int *sum(int a, int b)
{
	static int res;

	res = a + b;

	return &res;
}