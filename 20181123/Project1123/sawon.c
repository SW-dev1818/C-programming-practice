// ����: 486~518
// 15���� ���� �������� ����
// exit �Լ� ��� �� �˻��غ���
// malloc: �޸� ���� �Ҵ�, free: �޸� ��ȯ
// calloc: �Ҵ�� ���� ������ 0���� �ʱ�ȭ�ϰ� �޸� ���� ����, realloc: ũ�� ����
// &: ������ �ּҸ� ���ϴ� ������
// strcmp: ������ 0, �ٸ��� 1�� �Լ�

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