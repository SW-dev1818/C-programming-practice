#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void apple(char *dog, int size);

void my_gets(char *ps);

void main()
{
	char str[100];

	printf("입력해: ");
	gets(str);
	printf("입력한 문자열은 %s입니다.", str);

	//printf("%p\n", "gohome");
	//printf("%c\n", *"gohome");
	//printf("%c\n", *("gohome" + 1));
	//printf("%c\n", "gohome"[2]);

	//char *pc = "mango";
	//char str[70] = "banana"; //char형 배열 str[70]을 banana로 초기화
	//printf("%d\n",sizeof(*pc));
	//pc = "banana";
	//printf("%d\n", sizeof(pc));
	//strcpy(str, "banana");
	//printf("%d\n", sizeof(str));
	//str[0] = 't';
	//scanf("%s", &str); //scanf로 str 입력 받기
	//printf("%s\n", str); //str 출력
	//printf("%d\n", sizeof(str)); //str 사이즈 값 출력

	/*int num, grade;

	printf("학번: ");
	scanf("%d", &num);
	getchar(); //fflush(stdin); 대신 사용
	printf("학점: ");
	grade = getchar();
	printf("학번 : %d, 학점: %c", num, grade);*/

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