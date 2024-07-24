// ����: �Ǻ���ġ �� ���ϱ�: DP���2 - �޸��ϱ�(Memoization)�� �̿�
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include<stdio.h>
#define NUM 100

int arr[NUM] = {0, 1, 1};
int count = 0;

int fibonacci_memo(int n){
    if(arr[n] != 0)
        return arr[n];
    else{
        count++;
        arr[n] = fibonacci_memo(n-1) + fibonacci_memo(n-2);
        return arr[n];
    }
}

int main(){
    int result = fibonacci_memo(40);
    printf("result: %d \n", result);
    printf("count: %d \n", count);
    return 0;
}