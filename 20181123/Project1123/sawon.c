// 진도: 486~518
// 15장은 시험 범위에서 제외
// exit 함수 상수 값 검색해보기
// malloc: 메모리 동적 할당, free: 메모리 반환
// calloc: 할당된 저장 공간을 0으로 초기화하고 메모리 공간 얻음, realloc: 크기 조절
// &: 변수의 주소를 구하는 연산자
// strcmp: 같으면 0, 다르면 1인 함수

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(int argc, char **argv) {
	
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	system("pause");
}