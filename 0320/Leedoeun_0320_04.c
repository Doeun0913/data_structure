// ����: �Լ��� ����Ͽ� 2�� ������ ���� ���ϴ� ���α׷�
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���
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