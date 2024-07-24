// 제목: 과제01 - 배열과 반복문을 사용한 성적 처리 프로그램
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

int main(void)
{
    int score[5] = {1, 2, 3, 4, 5};
    int i;
    int total = 0;
    double avg;

    for(i=0; i<5; i++)
        scanf("%d", &score[i]);
    
    for(i=0; i<5; i++)
        total += score[i];  // total = total + score[i]

    for(i=0; i<5; i++)
        printf("%5d", score[i]);

    avg = total / 5.0;
    printf("\n");
    printf("평균: %.1lf\n", avg);
}
