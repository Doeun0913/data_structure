// ����: �ּ� ������(&)�� ���� ���� ������(*)
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���
#include <stdio.h>

int main(void)
{
    int a=10, b;
    int *p = &a;

    printf("a: %u\n", a);
    printf("a AD: %u\n", &a);
    printf("a Size: %u\n\n", sizeof(a));
    
    printf("p: %u\n", p);
    printf("p AD: %u\n", &p);
    printf("p Size: %u\n\n", sizeof(p));

    printf("*p: %u\n", *p);
    printf("*p AD: %u\n", &*p);
    printf("*p Size: %u\n\n", sizeof(*p));

    return 0;
}