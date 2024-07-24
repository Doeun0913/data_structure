// 제목: 팩토리얼 계산 재귀호출
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include<stdio.h>

int factorial(int); // 함수의 선언

int main(int argc, char const *argv[]){
    int n;
    printf("input n: ");
    scanf("%d", &n);
    printf("%d! : ", n);
    printf("%d", factorial(n));

    return 0;
}

int factorial(int n){
    if(n <= 1)
        return 1;
    else
        return n * factorial(n-1);
}