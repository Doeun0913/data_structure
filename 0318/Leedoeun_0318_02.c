// 제목: 과제02 - 입력한 숫자까지 구구단으로 출력하기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

int main(void)
{
    int i=0, j=0, n;
    int multiply[9];
    printf("\n 1~9의 정수를 입력하세요: ");

    while(0.001){
        scanf("%d", &n);
        if(n<0 || n>9)
            printf("\n 1~9의 정수를 입력하세요: ");
        else
            break;
    }

    printf("\n");
    for(i=0; i<9; i++)
    {
        for(j=2; j<=n; j++){
            multiply[i] = j*(i+1);
            printf("%d x %d = %d\t", j, i+1, multiply[i]);
        }
        printf("\n");
    }
}