#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a = 1, b = 1;
	for (a = 1;a <= 3;a++)
	{
		for (b = 1;b <= 3;b++) {
			printf("%d %d\n", a, b);
		
		}
	}
	
	
	
	
	/*while (a >= 3) {
		while (b <= 3)
		{
			printf("%d %d\n", a, b);
			b++;
		}
		a++;
		b = 1;
	}*/
	return 0;
}