// 제목: 3차원 문자 배열 입출력하기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

void main(){
    int i, j, k;
    char student[2][3][20];
    for(i=0; i<2; i++){
        printf("\n 학생 %d의 이름: ", i+1);
        gets(student[i][0]);
        printf(" 학생 %d의 학과: ", i+1);
        gets(student[i][1]);
        printf(" 학생 %d의 학번: ", i+1);
        gets(student[i][2]);
    }

    for(i=0; i<2; i++){
        printf("\n\n 학생%d", i+1);
        for(j=0; j<3; j++){
            printf("\n\t");
            for(k=0; student[i][j][k]!='\0'; k++){
                printf("%c", student[i][j][k]);
            }
        }
    }
    getchar();
}