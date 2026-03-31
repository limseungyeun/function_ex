#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a;
	int	b=1; //원하는 단
	printf("출력하고싶은 단은(2-9)");
	scanf("%d\n", &a);
	while (b <= 9) {   //1부터 
		printf("%d * %d = %d\n", a, b, a * b);
		b++;
	
	}
	return 0;
}