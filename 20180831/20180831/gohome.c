#include<stdio.h> //주요 입출력 함수가 선언(정의)되어 있음.
#include<stdlib.h> //라이브러리 함수 중 system 함수를 사용하기 위함.

int main(void) {
	/*printf("반가워요");*/
	int a;
	int b;
	printf("값을 입력하세요: ");
	scanf_s(a, b);
	printf("%d\n", a);
	printf("%d\n", b);
	/*printf("%u\n", &a);
	printf("%u\n", &b);
	printf("%u\n", &c);*/
	system("pause"); //이 시점에서 시스템을 멈추기.
}