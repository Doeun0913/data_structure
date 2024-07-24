// 제목: 선형리스트 1
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include <stdio.h>

int main(int argc, char *const argv[]){
    char al[4][5] = {"상원", "상범", "수영", "현정"};

    for(int i=0; i<4; i++)
        printf("%c", al[0][i]);
    
    return 0;
}