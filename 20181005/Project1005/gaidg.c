#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void apple(char *dog, int size);

void my_gets(char *ps);

void main()
{
	char str[100];

	printf("�Է���: ");
	gets(str);
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);

	//printf("%p\n", "gohome");
	//printf("%c\n", *"gohome");
	//printf("%c\n", *("gohome" + 1));
	//printf("%c\n", "gohome"[2]);

	//char *pc = "mango";
	//char str[70] = "banana"; //char�� �迭 str[70]�� banana�� �ʱ�ȭ
	//printf("%d\n",sizeof(*pc));
	//pc = "banana";
	//printf("%d\n", sizeof(pc));
	//strcpy(str, "banana");
	//printf("%d\n", sizeof(str));
	//str[0] = 't';
	//scanf("%s", &str); //scanf�� str �Է� �ޱ�
	//printf("%s\n", str); //str ���
	//printf("%d\n", sizeof(str)); //str ������ �� ���

	/*int num, grade;

	printf("�й�: ");
	scanf("%d", &num);
	getchar(); //fflush(stdin); ��� ���
	printf("����: ");
	grade = getchar();
	printf("�й� : %d, ����: %c", num, grade);*/

	/*char cat[8];
	printf(sizeof(cat));
	apple(cat, sizeof(cat));
	printf("%s\n", cat);*/

	system("pause");
}

void my_gets(char *ps)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		*ps = ch;
		ps++;
	}
	*ps = '\0';
}

/*void apple(char *dog, int size)
{
	char go;
	int i = 0;

	go = getchar();
	while ((go != '\n') && (i < size-1))
	{
		dog[i] = go;
		i++;
		go = getchar();
	}
	dog[i] = '\0';
}*/