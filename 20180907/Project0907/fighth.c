#include<stdio.h>

void main() {
	int a= 30, b = 10, avg;
	/*char c;
	short d;
	float e;*/
	const int *pb = &b;
	printf("���� b�� = %d\n", b);
	/*pb = &b;*/
	/*pb = 5;*/
	int *pa;
	pa = &b;
	*pa = 20;
	avg = *pa + *pb;
	printf("���� b�� = %d\n", *pa);
	// *pb = 55; const�� ���� �� ���� �Ұ���

	
	/*printf("a �ּ� �� = %u\n", &a);
	printf("b �ּ� �� = %u\n", &b);
	printf("c �ּ� �� = %u\n", &c);
	printf("d �ּ� �� = %u\n", &d);
	printf("e �ּ� �� = %u\n", &e);
	printf("*pb �������� �� = %d\n", *pb);
	printf("b-*pb = %d\n", b-*pb);
	printf("b+*pb = %d\n", b+*pb);
	printf("avg�� �� = %d\n", avg);*/

	system("pause");
	return 0;
}