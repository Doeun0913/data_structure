// 제목: 배열과 for 반복문 Review
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 11, 22, 33, 44, 55, 33, 12, 113, 114};
    char b[] = "Sunmoon Univ is the best of best";
    // int c=0;
    // c = sizeof(a)/4;

    for(int i=0; i< sizeof(a)/4; i++)   // 정수형 배열의 개수
        printf("a[%d]: %d \n", i, a[i]);

    for(int i=0; b[i] != '\0'; i++)   // 문자형 배열의 개수
        printf("b[%d]: %c \n", i, b[i]);

    return 0;
}