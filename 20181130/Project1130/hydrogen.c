// 시험: 실습 3문제(최대한 쉽게 내려함, 응용 포인터 부분 제외), 
// 필기 9장~배운데 까지..(응용 포인터 부분 제외) 예제 위주 공부
// 객체 지향 언어: 객체 위주로 돌아가는 언어
// 클래스: 객체를 만들기 위한 도구
// 진도: 520~569
// 15, 16장 시험 범위에서 제외합니다
// 구조체는 배열, 포인터, 다른 구조체 등도 멤버로 넣어 확장 가능
// 자료형이 같은 구조체 변수는 대입 연산이 가능하며 함수의 매개변수에 쓸 수 있음
// 구조체는 멤버의 크기를 비트 단위로 설정
// 바이트 얼라인먼트: 균형 맞추기
// malloc: 동적할당
// strcpy: 뒤에 것을 앞에 것으로 복사
// 시험: 오전 9시 출석체크, 오전 10시부터 시험, 이론 30분 보고 10분 휴식 실습 40분
// 대소문자 구분 못하는 컴파일러
// 구조체 struct
// 공용체 union
// 열거형 enum

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct food {
	double name;
	int number;
};

typedef struct food Food;
void print_data(Food);

void main () {
	
	Food f1 = { 3.4, 4 };

	print_data(f1);

	system("pause");

	return 0;

}

void print_data(Food)
{
	printf("음식: %.1lf\n", f1.name);
	printf("숫자: %d\n", f1.number);
}