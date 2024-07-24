// 제목: 포인터의 이해
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include<stdio.h>
#include<string.h>

int main(void)
{
    char *pc = "mango";
    char str[80] = "apple";
    pc = "banana";
    strcpy(str, "banana");
    // printf("%u %u:", str, &str[0]);

    for(int i=0; i<6; i++)
        printf("pc[%d]: %c\t", i, pc[i]);

    printf("\n");
    
    for(int i=0; i<6; i++)
        printf("str[%d]: %c\t", i, *(str+i));


    // pc="banana";
    // strcpy(str, "banana");
   
    return 0;
}