// ����: 382~410
// static ������ �ʱ�ȭ�� �ڵ������� �� ���� �ȴ�
// auto ������ �ʱ�ȭ ���� �ʰ� ���� �𸥴�

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void hello1(void);
//void hello2(void);
//void auto_gold(void);
//void static_money(void);
//void banana(int);

int *sum(int a, int b);

//int a = 10; // �������� a ���� 10 ����

void main()
{
	int *p;
	
	p = sum(7206, 7213);
	printf("�� ������ �� : %d\n", *p);

	/*int i;

	printf("auto ���� ������ ����� �Լ�\n");
	for (i = 0; i < 4; i++) {
		auto_gold();
	}

	printf("static ���� ������ ����� �Լ�\n");
	for (i = 0; i < 10; i++) {
		static_money();
	}*/

	/*a = 2; // �������� a ���� 2 ����, main�� �ȿ����� �����ϴ� a

	printf("�Լ� ȣ�� NO: %d\n", a);

	hello1();
	hello2();

	printf("�Լ� ȣ�� YES: %d\n", a);*/

	/*double a = 3.5, b = 7.5;

	printf("��ȯ ��: %2lf, %2lf\n", a, b);
	{
		double temp;

		temp = a; // temp ���� 3.5 ����
		a = b; // a ���� 7.5 ����
		b = temp; // b ���� 3.5 ����

		printf("%2lf\n", temp);

	}
	printf("��ȯ ��: %2lf, %2lf\n", a, b);*/

	system("pause");
}

/*void hello1(void)
{
	int a = 40; // �������� a ���� 40 ����, hello1�̶�� �Լ������� �����ϴ� a ��
}

void hello2(void)
{
	a = 30; // �������� a ���� 30 ����
}*/

/*void auto_gold(void) {
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_money(void) {
	static int a;

	a++;
	printf("%d\n", a);
}*/

/*void banana(int b)
{
	b = b + 20;
}*/

int *sum(int a, int b)
{
	static int res;

	res = a + b;

	return &res;
}