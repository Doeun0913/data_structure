// ����: ���丮�� ��� ���ȣ��
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include<stdio.h>

int factorial(int); // �Լ��� ����

int main(int argc, char const *argv[]){
    int n;
    printf("input n: ");
    scanf("%d", &n);
    printf("%d! : ", n);
    printf("%d", factorial(n));

    return 0;
}

int factorial(int n){
    if(n <= 1)
        return 1;
    else
        return n * factorial(n-1);
}