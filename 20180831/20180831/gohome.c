#include<stdio.h> //�ֿ� ����� �Լ��� ����(����)�Ǿ� ����.
#include<stdlib.h> //���̺귯�� �Լ� �� system �Լ��� ����ϱ� ����.

int main(void) {
	/*printf("�ݰ�����");*/
	int a;
	int b;
	printf("���� �Է��ϼ���: ");
	scanf_s(a, b);
	printf("%d\n", a);
	printf("%d\n", b);
	/*printf("%u\n", &a);
	printf("%u\n", &b);
	printf("%u\n", &c);*/
	system("pause"); //�� �������� �ý����� ���߱�.
}