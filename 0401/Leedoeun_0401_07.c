// ����: �Ǻ���ġ �� ���ϱ�: f(n) = f(n-1) + f(n-2)
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include<stdio.h>

int count;

int fibonacci(int n){
    count++;
    if(n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int result = fibonacci(10);
    printf("result: %d \n", result);
    printf("count: %d \n", count);
    return 0;
}