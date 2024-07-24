// 제목: 포인터를 이용해 문자열 처리하기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *pc = "mango";
    char str[80] = "apple";

    pc = "banana";
    // str = "banana"; // str == &str[0]
    strcpy(str, "banana");

    for(int i=0; str[i] != '\0'; i++)
        printf("str[%d]: %c  ", i, str[i]);
    printf("\n");
    // for(int i=0; pc[i] != '\0'; i++)
    //     printf("pc[%d]: %c  ", i, pc[i]);
    for(int i=0; i<6; i++)
        printf("pc[%d]: %c  ", i, *(pc + i));

    // printf("Size pc :%d\n", sizeof(pc));
    // printf("Size str: %d\n", sizeof(str));

    // pc[0] = 'S';
    // str[0] = 'S';

    // scanf("%s", pc);
    // scanf("%s", str);

    // printf("pc: %s\n", pc);
    // printf("str: %s\n", str);
}