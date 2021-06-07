// Áøµµ: 412~443

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {

	int pary1[4] = { 1, 2, 3, 4 };
	int pary2[4] = { 11, 12, 13, 14 };
	int pary3[4] = { 21, 22, 23, 24 };
	int *ary[3] = { pary1, pary2, pary3};

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", ary[i][j]);
		}
		printf("\n");
	}

	system("pause");
}