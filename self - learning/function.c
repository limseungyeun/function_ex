#include <stdio.h>

int digit(int n) {
    // [탈출 조건] 숫자가 10보다 작으면(즉, 한 자릿수면) 그 숫자 그대로 반환하고 멈춤
    if (n < 10) return n;

    // [재귀 호출] 
    // 1. (n % 10) : 현재 숫자의 '맨 뒷자리'를 떼어내서 더함
    // 2. digit(n / 10) : '맨 뒷자리를 제외한 나머지'를 가지고 자기 자신을 다시 호출
    return (n % 10) + digit(n / 10);
}

int main() {
    printf("%d", digit(235)); // 235의 각 자릿수 합(5 + 3 + 2)을 출력
    return 0;
}