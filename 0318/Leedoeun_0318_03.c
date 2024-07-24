// 제목: 과제03 - 문자 배열과 NULL의 이해
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

int main(void)
{
    char univ[7] = "SUNMOON";
    char str[7] = {'S', 'U', 'N', 'M', 'O', 'O', 'N'};

    printf("nuiv[%d]: %c\n", 7, univ[7]);
    printf("str[%d]: %c\n", 7, str[7]);
    printf("---------------\n");

    //for(int i=0; nuiv[i]; i++)
    for(int i=0; i<=9; i++){
        printf("univ[%d]: %c\t", i, univ[i]);
        printf("str[%d]: %c", i, str[i]);
        printf("\n");
    }
}
