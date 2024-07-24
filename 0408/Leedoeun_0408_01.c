// 제목: 2차원 배열의 논리적 물리적 순서
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include <stdio.h>

int main(void){
    int i, n = 0, *ptr;
    int sale[2][4] = {63, 84, 140, 130, 157, 209, 251, 312};    // 2차원 배열의 초기화
                  // {{63, 84, 140, 130}, {157, 209, 251, 312}};

    // ptr = &sale[0][0];
    ptr = sale;

    for(i=0; i<8; i++){
        printf("\n address: %u sale %d = %d", ptr, i, *ptr);
        ptr++;
    }
    getchar();  return 0;
}