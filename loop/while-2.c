#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//int num, cnt = 0, i;
	//printf("원하는 배수 입력: ");
	//scanf("%d", &i); //원하는 배수의 숫자//i=5
	//printf("배수 개수 입력: ");
	//scanf("%d", &num); // 보여지는 배수의 배수 num=4 입력
	//while (cnt++ < num) // 0<5 조건을 물어본고 참=> 다음문장 ㅏ기전에 //cnt+1 ->cnt1이됨
		  // 3 * 1
	
	int num, cnt = 0, i;
	printf("원하는 배수 입력: ");
	scanf("%d", &i); //원하는 배수의 숫자//i=5
	printf("배수 개수 입력: ");
	scanf("%d", &num); // 보여지는 배수의 배수 num=4 입력
	while (cnt ++ < num)
		printf("%d", i * cnt);

	//5*1 //5 * 2
	//cnt 0
	//cnt 1
	//cnt 2
	//cnt 3
	//cnt 4

	return 0;
}