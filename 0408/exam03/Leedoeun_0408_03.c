// 제목: 선형리스트에 원소 삽입하고 삭제하기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include <stdio.h>
#include "listS.h"

int main(void){
    int list[MAX] = {10, 20, 40, 50, 60, 70};
    int i, move, size = 6;      // size는 리스트에 있는 원소의 개수
    printf("\n삽입 전 선형 리스트: ");
    for(i=0; i<size; i++)   printf("%3d ", list[i]);
    printf("\n원소의 갯수: %d \n", size);

    move = insertElement(list, size, 30);

    printf("\n삽입 후 선형 리스트: ");
    for(i=0; i<=size; i++)  printf("%3d ", list[i]);
    printf("\n원소의 갯수: %d ", ++size);
    printf("\n자리 이동 횟수: %d \n", move);

    move = deleteElement(list, size, 30);
    if(move == size)    printf("\n 원소가 없어 삭제 불가능.\n");
    else{
        printf("\n삭제 후 선형 리스트: ");
        for(i=0; i<size-1; i++) printf("%3d ", list[i]);
        printf("\n원소의 갯수: %d ", --size);
        printf("\n자리 이동 횟수: %d \n", move);
    }

    getchar();  return 0;
}