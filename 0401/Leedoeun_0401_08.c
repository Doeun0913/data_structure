// ����: �Ǻ���ġ �� ���ϱ�: DP���1 - for���� �̿�
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include<stdio.h>

int count;

int fibonacci(int n){
    int arr[n];
    int i;
    for(i=1; i<=n; i++){
        if(i == 1 || i == 2)
            arr[i] = 1;
        else
            arr[i] = arr[i-1] + arr[i-2]; 

    count++;
    }
    return arr[n];
}

int main(){
    int result = fibonacci(10);
    printf("result: %d \n", result);
    printf("count: %d \n", count);
    return 0;
}