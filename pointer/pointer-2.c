#include <stdio.h>

int main(void) {
	int i = 3000;
	int* p = NULL; //포인터 변수 선언
	
	p = &i; //i 변수의 주소를 p포인터 변수에 줌
	
	printf("p=%p\n", p);

	printf("&i=%p\n\n", &i);
	//%p : 주소를 출력하는 서식 문자
	printf("i= %d\n", i);
	printf("*p = %d\n", *p);
    //주소에 저장된 내용에 접근하는 포인터
	i = 4000;
	printf("i=%d\n", i);
	*p = 5000;
	printf("*p=%d\n", *p);
    
	int x = 10, y = 20;
	int* pi; //포인터 변수
	pi = &x; //x의 주소를 pi라는 변수에 출력한다.
	printf("pi = %p\n", pi); //x의 주소를 pi가 가르키는 주소를 출력한다
	printf("*pi = %d\n", *pi); // pi가 가르키는 x의 값인 10을 출력한다
	pi = &y; //y의 주소를 pi가 변수를 출력한다.
	printf("pi = %p\n", pi); //y의 주소를 pi가 가르키는 주소를 출력한다
	printf("*pi = %d\n", *pi); //pi가 가르키는 y의 값인 20을 출력한다


	return 0;
}