// ����: �迭�� for �ݺ��� Review
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 11, 22, 33, 44, 55, 33, 12, 113, 114};
    char b[] = "Sunmoon Univ is the best of best";
    // int c=0;
    // c = sizeof(a)/4;

    for(int i=0; i< sizeof(a)/4; i++)   // ������ �迭�� ����
        printf("a[%d]: %d \n", i, a[i]);

    for(int i=0; b[i] != '\0'; i++)   // ������ �迭�� ����
        printf("b[%d]: %c \n", i, b[i]);

    return 0;
}