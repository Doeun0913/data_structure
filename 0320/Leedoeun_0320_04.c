// 제목: 함수를 사용하여 2개 변수의 합을 구하는 프로그램
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

int sum(int, int);

int a, b;

int main(void)
{
    a=3, b=4;
    int result;

    result = sum(a, b);
    printf("result=%d\n", result);

    return 0;
}

int sum(int x, int y)
{
    int temp;

    temp = x + y;

    printf("a=%d, b=%d\n", a, b);

    return temp;
}