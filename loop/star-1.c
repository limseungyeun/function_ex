#include <stdio.h> 
int main(void)
{
	for (int i = 5; i >= 1; i--) { //나 내려감 내가 첫번째 줄임
		
		for (int j = 1; j <= i;j++) {//난 옆으로감

			printf("*");

		}

		printf("\n");
	}
		return 0;
}