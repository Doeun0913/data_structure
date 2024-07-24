// 제목: 포인터 배열을 이용해 문자열 저장하기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

int main(){
    int i;
    char *ptrArray[4] = {{"Korea"}, {"Seoul"}, {"Mapo"}, {"152번지 2 / 3"}};
    for(i=0; i<4; i++)
        printf("\n %s", ptrArray[i]);

    ptrArray[2] = "Jongno";
    printf("\n\n");
    for(i=0; i<4; i++)
        printf("\n %s", ptrArray[i]);

    getchar();
}