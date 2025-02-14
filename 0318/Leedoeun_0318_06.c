// 제목: 과제06 - 2차원 배열 가로 세로의 합 구하기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

int main(void)
{
    int ary[5][6] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    int i, j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            ary[4][j] += ary[i][j];
            ary[i][5] += ary[i][j];
            ary[4][5] += ary[i][j];
        }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<6; j++)
        {
            printf("%5d", ary[i][j]);
        }
        printf("\n");
    }
    return 0;
}