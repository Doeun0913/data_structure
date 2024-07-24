// 제목: 과제02 - 중첩 반목문으로 구구단 출력하기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 1; i <= 9; i++) {
        for (j = 2; j <= 9; j++) {
            printf("%d x %d = %2d\t", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}
