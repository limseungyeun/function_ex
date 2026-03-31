//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //printf 
#include <stdio.h>
#include <time.h>
int main(void)
{
	srand((unsigned)time(NULL)); //난수 발생기 시드 설정
	int answer = rand() % 100;   // 정답을 난수로 발생한다
	//printf("%d\n", answer);
	int guess;
	int try = 0;
	//반복 구조
	do {
		printf("정답을 추측해보세요");
		scanf_s("%d", &guess);
		try++;
		if (guess > answer) //사용자가 입력한 정수가 정답보다 높으면
			printf("입력한 숫자가 정답보다 low(아래)\n");
		else if (guess < answer); //사용자가 입력한 정수가 정답보다 낮으면
	} while (guess != answer); //같지 같지 않으면 계속 수행
	printf("축하합니다. 시도 횟수=%d\n", try);
	return 0;
}