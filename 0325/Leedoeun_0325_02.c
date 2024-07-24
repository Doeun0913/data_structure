// 제목: 변수의 값 교환하기 - 포인터 변수
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>
void swap(int*, int*);

int main(void)
{
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);

    return 0;
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("*pa: %d, *pb: %d\n", *pa, *pb);
}