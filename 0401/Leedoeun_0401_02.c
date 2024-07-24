// 제목: 재귀호출 함수(recursive call function)
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include <stdio.h>

void fruit(int count);

int main(void){
    fruit(1);

    return 0;
}

void fruit(int count){
    printf("count=%d, apple\n", count);

    if(count == 3) return;

    fruit(count+1);
    printf("count=%d, jam\n", count);
}