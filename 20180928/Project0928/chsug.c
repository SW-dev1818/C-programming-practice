#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

void main()
{
	//char ch;
	
	//int i;
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);
		if (res == -1) break;
		printf("%d ", ch);
	}

	/*for (i = 0; i < 10; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}*/

	/*int go;

	go = getchar();
	printf("문자를 입력해: ");
	putchar(go);
	putchar('B');*/

	/*char ch1, ch2;
	scanf("%c %c", &ch1, &ch2); //띄어쓴 부분은 화이트 스페이스. 구분자 역할
	printf("[%c%c]", ch1, ch2);*/

	/*char hs1, hs2;

	scanf("%c%c", &hs1, &hs2);
	printf("[%c%c]", hs1, hs2);*/

	/*char apple, can = 'Z'; //char형 apple, can을 선언과 동시에 초기화

	if ((can >= 'A') && (can <= 'Z'))
	{
		apple = can + ('a' - 'A');
	}
	printf("%c %c", can, '\n');
	printf("%c", apple);
	printf("%d\n", sizeof(apple));
	printf("%d\n", sizeof(can));*/

	/*int so;

	printf("%d\n", 'b');
	printf("%c\n", 100);
	printf("%d\n", sizeof('b'));


	so = 'a';
	while (so <= 'z')
	{
		printf("%c", so);
		so++;
	}*/
	/*so++;
	printf("%d\n", so, so);*/

	system("pause");
}