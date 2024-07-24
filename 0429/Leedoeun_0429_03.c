// 제목: 메모리 동적할당의 이해 - malloc()과 free() 함수
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("input number of students: ");
    scanf("%d", &n);

    int *score = (int*)malloc(n * sizeof(int)); // 동적 메모리 할당

    if(score == NULL){  // 메모리 할당이 실패한 이유
        printf("Memory allocation failed. Exiting program.\n");
        return -1;  // 프로그램 종료
    }

    for(int i=0; i<n; i++)
        score[i] = i;

    for(int i=0; i<n; i++)
        printf("score[%d]: %d\n", i, score[i]);

    free(score);    // 동적으로 활당된 메모리 해체
    return 0;
}