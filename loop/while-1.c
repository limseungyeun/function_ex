//1~100 합 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//int i = 2;//1~100 n
	//int sum = 0; //합계 누적할 변수
	//while (i <= 100) //i<6
	//{
	//	//printf("%d\n", i); //i가 6일때
	//	sum = sum + i;  // i+=1 //i++
	//	i = i + 2; //+100
	//}
	//printf("2~100 짝수의 합은:%d", sum);
	int num, i = 0;
	printf("양의 정수를 입력 : ");
	scanf("%d", &num);//5입력
	while (i < num)
	{//5탈출
		printf("handaman!\n");
		i++;//1씩 증:
	}


	return 0;
}