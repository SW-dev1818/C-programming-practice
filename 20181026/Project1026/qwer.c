//����: 361~380

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//char *my_strcpy(char *pd, char *ps);

void main()
{
	char str1[80] = "�ȳ��ϼ���";
	char str2[80] = "�ȳ�"; //�ѱ��� �������� ũ��

	printf("������ ���߿� ������ �̸�: ");
	if (strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);
	
	printf("�տ��� 3���� ���ڸ� ���ϸ� ");
	if (strncmp(str1, str2, 3) == 0)
		printf("����.\n");
	else
		printf("�ٸ���.\n");

	//strcat(str, "fish");
	//printf("%s\n", str);
	//strncat(str, "coke", 4);
	//printf("%s\n", str);

	/*char str1[20], str2[20];
	char *ps;

	printf("2���� ����: ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		ps = str1;
	else
		ps = str2;
	printf("�̸��� �� ������ : %s\n", ps);*/

	

	//strncpy(str, "apple-pieabc", 50);
	//printf("%s\n", str);
	//printf("%d\n", strlen("k\0im"));

	/*char str[80] = "chicken";

	printf("�ٲٱ� ��: %s\n", str); //chicken �� ���
	my_strcpy(str, "fish"); //my_strcpy �Լ��� ���ڿ� fish ����
	printf("�ٲ� �� ���ڿ�: %s\n", str); //fish �� ���
	printf("�ٸ� ���ڿ� ����: %s\n", my_strcpy(str, "kiwi")); //��ȯ��
	printf("%u\n", str);
	printf("%u\n", my_strcpy);*/

	/*char str1[80] = "strawberry";
	char str2[80] = "apple";
	char *ps1 = "tomato";
	char *ps2 = "tomato";

	printf("���� : %s\n", str1);
	strcpy(str1, str2);
	printf("�ٲ� : %s\n", str1);

	strcpy(str1, ps1);
	printf("�ٲ� : %s\n", str1);

	strcpy(str1, ps2);
	printf("�ٲ� : %s\n", str1);

	strcpy(str1, "banana");
	printf("�ٲ� : %s\n", str1);

	printf("%u\n", str1);
	printf("%u\n", str2);
	printf("%u\n", *ps1);
	printf("%u\n", *ps2);*/

	system("pause");
}

/*char *my_strcpy(char *pd, char *ps)
{
	char *po = pd; //*po��� ���ο� ������ �ȿ� pd ���� ���� �־��

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0'; //�� ������ ���� ���� �� �ٸ� �޸� ������ ħ���� �ܾ ȥ���ؼ� ��µȴ�

	return po;
}*/