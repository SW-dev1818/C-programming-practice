//진도: 361~380

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//char *my_strcpy(char *pd, char *ps);

void main()
{
	char str1[80] = "안녕하세요";
	char str2[80] = "안녕"; //한글이 영문보다 크다

	printf("사전에 나중에 나오는 이름: ");
	if (strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);
	
	printf("앞에서 3개의 문자를 비교하면 ");
	if (strncmp(str1, str2, 3) == 0)
		printf("같아.\n");
	else
		printf("다르다.\n");

	//strcat(str, "fish");
	//printf("%s\n", str);
	//strncat(str, "coke", 4);
	//printf("%s\n", str);

	/*char str1[20], str2[20];
	char *ps;

	printf("2개의 음식: ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		ps = str1;
	else
		ps = str2;
	printf("이름이 긴 과일은 : %s\n", ps);*/

	

	//strncpy(str, "apple-pieabc", 50);
	//printf("%s\n", str);
	//printf("%d\n", strlen("k\0im"));

	/*char str[80] = "chicken";

	printf("바꾸기 전: %s\n", str); //chicken 값 출력
	my_strcpy(str, "fish"); //my_strcpy 함수에 문자열 fish 복사
	printf("바꾼 후 문자열: %s\n", str); //fish 값 출력
	printf("다른 문자열 대입: %s\n", my_strcpy(str, "kiwi")); //반환값
	printf("%u\n", str);
	printf("%u\n", my_strcpy);*/

	/*char str1[80] = "strawberry";
	char str2[80] = "apple";
	char *ps1 = "tomato";
	char *ps2 = "tomato";

	printf("최초 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 : %s\n", str1);

	printf("%u\n", str1);
	printf("%u\n", str2);
	printf("%u\n", *ps1);
	printf("%u\n", *ps2);*/

	system("pause");
}

/*char *my_strcpy(char *pd, char *ps)
{
	char *po = pd; //*po라는 새로운 포인터 안에 pd 값을 집어 넣어라

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0'; //이 문장을 선언 안할 시 다른 메모리 영역을 침범해 단어가 혼합해서 출력된다

	return po;
}*/