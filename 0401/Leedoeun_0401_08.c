// 제목: 피보나치 수 구하기: DP방법1 - for문을 이용
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

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