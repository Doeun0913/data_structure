// ����: c���� �迭�� �������� ����
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include <stdio.h>

void func(int[]);   // �Լ��� ����

int main(int argc, char const *argv[]){
    int a[5] = {1, 2, 3, 4, 5};
    printf("a vs &a[0]: %d %d\n\n", a, &a[0]);

    printf("before func call a[3]: ");
    printf("%d %d %d\n", a+3, *(a+3), a[3]);

    printf(" after func call a[3]: ");
    func(a);
    printf("%d %d %d\n", a+3, *(a+3), a[3]);

    return 0;
}

void func(int b[]){
    b[3] = 9;
}