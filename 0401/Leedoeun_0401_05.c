// ����: while �ݺ������� ���丮�� ���ϱ�
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include<stdio.h>

int factorial(int n){
    int fact = 1;

    while(n > 1){
        fact *= n--;
        printf("x = %d \t x! = %d\n", n+1, fact);
    }
    return fact;
}

int main(void){
    int x;

    printf("Input x: ");
    scanf("%d", &x);
    printf("\n %d factorial: %d\n", x, factorial(x));

    return 0;
}
 