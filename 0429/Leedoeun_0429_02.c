// 제목: 아래 코드의 문제점을 파악하자
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include <stdio.h>

int main(){
    int n;
    printf("input number of student: ");
    scanf("%d", &n);

    int score[n];

    for(int i=0; i<n; i++)
        score[i] = i;
    
    for(int i=0; i<n; i++)
        printf("score[%d]: %d\n", i, score[i]);

    return 0;
}