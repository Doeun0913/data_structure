// 제목: 변수의 값 교환하기 - 지역변수 I
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>
void swap(int, int);

int main(void)
{
    int a = 10, b = 20;

    swap(a, b);
    printf("\n main a: %d\n main b: %d\n", a, b);
    printf(" AD main a: %u\n AD main b: %u\n", &a, &b);

    return 0;
}

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
    printf(" swap a: %d\n swap b: %d\n", a, b);
    printf(" AD swap a: %u\n AD swap b: %u\n", &a, &b);
}