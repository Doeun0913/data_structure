// ����: ������ �� ��ȯ�ϱ� - ������ ����
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���
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