// 제목: 과제04 - 입력한 문자열의 길이 계산
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

int main(void)
{
    int i, length=0;
    char str[50];

    printf("\n 문자열을 입력하세요: ");
    gets(str);
    printf("\n 입력된 문자열은 \n \"");
    for(i=0; str[i]; i++)
    {
        printf("%c", str[i]);
        length += 1;
    }

    printf("\" \n입니다.");
    printf("\n\n 입력된 문자열의 길이 = %d\n", length);

    getchar();
}