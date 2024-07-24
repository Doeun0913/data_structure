// 제목: 팩토리얼 계산 for문
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include<stdio.h>

int main(int argc, char const *argv[]){
    int n, fact = 1;
    printf("input n: ");
    scanf("%d", &n);
    printf("%d! : ", n);

    for(int i=n; i>=1; i--) {
        printf("%d", i);
        if(i != 1) printf(" x ");
        fact = fact * i;
    }

    printf(" = %d", fact);

    return 0;
}