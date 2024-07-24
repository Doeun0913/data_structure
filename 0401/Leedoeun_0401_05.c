// 제목: while 반복문으로 팩토리얼 구하기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include<stdio.h>

int factorial(int n){
    int fact = 1;

    while(n > 1){
        fact *= n--;
        printf("x = %d \t x! = %d\n", n+1, fact);
    }
    return fact;
}

int main(void){
    int x;

    printf("Input x: ");
    scanf("%d", &x);
    printf("\n %d factorial: %d\n", x, factorial(x));

    return 0;
}
 