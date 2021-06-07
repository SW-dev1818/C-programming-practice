#include<stdio.h>

/*void change(int *pa, int *pb);
void swap(double *pc, double *pd);*/

void main() {
	/*int a = 7, b = 10;
	double c = 3.5, d = 4.5;

	change(&a, &b);
	printf("a:%d, b: %d\n", a, b);
	swap(&c, &d);
	printf("c:%1lf, d: %1lf\n", c, d);*/


	/* ary[3] = { 1,2,3 };

	printf("%u\n", ary);
	printf("%u\n", &ary[0]);
	printf("%d\n", *ary);
	printf("%d\n", ary[0]);*/

	/*int ary[4];
	int a;

	*(ary + 0) = 302;
	*(ary + 1) = *(ary + 0) + 10;
	*(ary + 2) = *(ary + 1) + 10;*/

	/*int ary[4];
	int *pa = ary;
	int a;

	*pa = 12;
	*(pa + 1) = 42;
	*(pa + 2) = 53;
	*(pa + 3) = 63;
	pa[2] = pa[0] + pa[1];

	for (a = 0; a < 4; a++)
	{
		printf("%4d", pa[a]);
	}*/

	/*printf("오늘 하루도 파이팅 해보아요~~ %c\n");*/
	/*printf("네 번째 배열: ");
	scanf_s("%d", ary + 3);*/

	/*for (a = 0; a < 4; a++) {
		printf("%4d", *(ary + a));
	}

	printf("ary[0]: %d\n", sizeof(ary[0]));
	printf("ary[1]: %d\n", sizeof(ary[1]));
	printf("ary[2]: %d\n", sizeof(ary[2]));
	printf("ary[3]: %d\n", sizeof(ary[3]));
	printf("ary[0]+ary[1]: %d\n", ary[0] + ary[1]);*/

	int ary[4] = { 2,4,6,8 };
	int *pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", *pa);
		pa++;
	}

	system("pause");	
}

/*void change(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void swap(double *pc, double *pd)
{
	double sum;

	sum = *pc;
	*pc = *pd;
	*pd = sum;
}*/