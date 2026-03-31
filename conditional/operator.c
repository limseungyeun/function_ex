#include <stdio.h>
int main(void)
{
    int num1, num2;
    int res1;
    double res2;
    char op, a;  //이어 나갈 때는 ,을 반드시 붙히자

    while (1) 
    {
        printf("첫번째 숫자를 입력하세요:  ");
        scanf_s("%d", &num1);
        printf("연산자를 입력하세요(+ - * /):  ");
        scanf_s(" %c", &op);
        printf("두번째 숫자를 입력하세요:  ");
        scanf_s("%d", &num2);

        switch (op)
        {

        case '+':
            res1 = num1 + num2;
            //printf("덧셈 결과: %d\n", sum);
            break;

        case '-':
            res1 = num1 - num2;
            //printf("뺄셈 결과: %d\n", sub);
            break;

        case '*':
            res1 = num1 * num2;
            //printf("곱셈 결과: %d\n", mul);
            break;

        case '/':
            res2 = (double)num1 / num2;
            //printf("나눗셈 결과: %.2f\n", divi);
            break;
        }
        if (op == '+' || op == '-' || op == '*')
            printf("연산결과: %d\n", res1);
        else if (op == '/')
            printf("연상결과: %.2f\n", res2);
        else
            printf("입력오류");
        printf("연산을 종료하시겠습니까?(y/Y)\n");
        scanf_s(" %c", &a);
        if (a == 'y' || a == 'Y')    //또는을 사용할 때는 ||를 사용한다. 또 옆의 기호를 쓸때 () 안에 문자를 적는다
            break;


    }
    return 0;
}








