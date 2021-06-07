#include<stdio.h>

void main() {
	int a = 5, b = 7;
	const int *pb = &b;

	printf("변수 b값 : %d\n", *pb);
	pb = &a;
	printf("변수 a값 : %d\n", *pb);
	pb = &b;
	b = 10;
	printf("변수 b값 : %d\n", *pb);

	system("pause");
	return 0;
}