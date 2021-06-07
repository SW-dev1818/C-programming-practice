#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

//void print_ary(int *pa);
//void print_ary(int *pa, int size);
void input_ary(int *pa, int size);
int find_max(int *pa, int size);

void main()
{
	int ary[4];
	int max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열 최댓값 : %d\n", max);

	//int ary1[4] = { 1,2,3,4 };
	//int ary2[6] = { 5,6,7,8,9,10 };

	//print_ary(ary1, 4);
	//printf("\n");
	//print_ary(ary2, 6);

	//int a;
	//scanf("%d", &a);

	//printf("%d\n", a);

	//int ary[3] = { 10, 20, 30 };

	//print_ary(ary);

	//int ary[3] = { 19, 20, 21 };
	//int *pa = ary; 
	//int *pb = pa + 3; 

	//printf("pa: %u\n", pa);
	//printf("pb: %u\n", pb);
	//pa++;
	//printf("pb-pa:%u \n", pb - pa); 

	//printf("앞에 있는 배열 요소의 값 출력 : ");
	//if (pa < pb)printf("%d\n", *pa);
	//else printf("%d\n", *pb);

	system("pause");
}

void input_ary(int *pa, int size)
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
		for (i = 0; i < size; i++)
		{
			scanf("%d", pa + i);
	}
}

int find_max(int *pa, int size)
{
	int max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}
	return max;
}

/*void print_ary(int *pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}*/

/*void print_ary(int *pa)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%d ", pa[i]);
	}
}*/