#include<stdio.h>

void swap(int x, int y);

void main() {
	int a = 4, b = 5;
	swap(a, b);
	printf("a:%d,b:%d\n", a, b);
	system("pause");
	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}