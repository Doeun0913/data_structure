// 제목: 재귀호출을 이용해 하노이 탑 퍼즐 풀기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include<stdio.h>

void hanoi(int n, int start, int work, int target);
void main(){
    hanoi(3, 'A', 'B', 'C');
    getchar();
}

void hanoi(int n, int start, int work, int target){
    if(n == 1)
        printf(" %c에서 원반 %d를(을) %c로 옮김 \n", start, n, target);
    else{
        hanoi(n-1, start, target, work);
        printf(" %c에서 원반 %d를(을) %c로 옮김 \n", start, n, target);
        hanoi(n-1, work, start, target);
    }
}