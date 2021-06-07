/*#include<stdio.h>

void main() {
	double a = 1.0, b = 2.0, sum;
	double avg;
	double *pa, *pb;
	double *pt = &sum;
	double *pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa - *pb;
	*pg = *pt / 9.0;

	printf("두 실수의 값 : %lf, %lf\n", *pa, *pb);
	printf("두 정수의 차 : %lf\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	system("pause");
	return 0;
}*/