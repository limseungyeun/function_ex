#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//int b, i;
	//int a = 0;
	//printf("정수를 입력하시오");
	//scanf("%d", & b);
	//for (i = 1;i <= b;i++);
	//{
	//	a = a + i; //sum+=i;
	//}
	//printf("합계:%d", a);

	//int b, a;
	//printf("원하는 단을 입력하세요");
	//scanf("%d단\n", &a); //a 변수에 원하는 정수를 입력받음
	//printf("<%d단>\n", a); //변수 a에 값이 %d에 대입하여 제목 출력
	//for (b = 1;b <= 9;b++) //단하고 곱할 숫자를 1부터 1씩 증가하여 9까지 반복 (10되면 탈출)
	//{
	//	// 첫번째 %d는 a가 대입된다(단 대입) 두번째 %d는 b인 1부터 9까지 대입 세번째 %d는 a*b결과값이 대입된다
	//	printf(" %d * %d = %d\n", a, b, a * b); 
	//}
	//int a, b;
	
		for (int a = 2; a <= 9; a++) { //a는 단 2~9
			// A는 B가 다 반복이 끝나면 그때 a가 하나 증가
			for (int b = 1; b <= 9; b++) //곱하는 1~9 반복 
			{
				printf("%d * %d = %-3d\n", a, b, a * b);
				//3 -> 3자리
				//원래는 오른쪽 정렬,
				//-을 붙이면 왼쪽 정렬
			}  //b for 끝
		} //a for 끝


	return 0;
} //main 끝