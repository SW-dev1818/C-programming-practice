#include<stdio.h>

void main() {
	int a = 5, b = 7;
	const int *pb = &b;

	printf("���� b�� : %d\n", *pb);
	pb = &a;
	printf("���� a�� : %d\n", *pb);
	pb = &b;
	b = 10;
	printf("���� b�� : %d\n", *pb);

	system("pause");
	return 0;
}