// 제목: 중간고사 15번
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include <stdio.h>

int count=0;
void sunmoon(int n){
    count++;
    printf("count:%d n:%d\n", count, n);
    if(n==2) return;
    sunmoon(n+1);
    count++;
    printf("count:%d n:%d\n", count, n);
}

int main(void){
    sunmoon(0);
    return 0;
}