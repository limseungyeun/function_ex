#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i = 0;
	do 
	{
		
		printf("1이면 새로 만들기\n");
		printf("2이면 파일 열기\n");
		printf("3이면 파일 닫기\n");
		printf("하나를 선택하세요\n");
		scanf("%d", &i);
	} while (i<1||i>3);
	printf("선택메뉴눈:%d", i);//i가 1~3

	return 0;
}