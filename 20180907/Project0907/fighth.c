#include<stdio.h>

void main() {
	int a= 30, b = 10, avg;
	/*char c;
	short d;
	float e;*/
	const int *pb = &b;
	printf("변수 b값 = %d\n", b);
	/*pb = &b;*/
	/*pb = 5;*/
	int *pa;
	pa = &b;
	*pa = 20;
	avg = *pa + *pb;
	printf("변수 b값 = %d\n", *pa);
	// *pb = 55; const로 인해 값 변경 불가능

	
	/*printf("a 주소 값 = %u\n", &a);
	printf("b 주소 값 = %u\n", &b);
	printf("c 주소 값 = %u\n", &c);
	printf("d 주소 값 = %u\n", &d);
	printf("e 주소 값 = %u\n", &e);
	printf("*pb 포인터의 값 = %d\n", *pb);
	printf("b-*pb = %d\n", b-*pb);
	printf("b+*pb = %d\n", b+*pb);
	printf("avg의 값 = %d\n", avg);*/

	system("pause");
	return 0;
}