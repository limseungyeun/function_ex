#include <stdio.h>
int main()
{
	int n = 5;
		
		switch(n) {
		case 1:
			printf("1번을 입력하세요");
			break;
		case 2:
			printf("2번을 입력하세요");
			break;
		case 3:
			printf("3번을 입력하세요");
			break;
		default:
			printf("입력 오류");
		}


	return 0;
}