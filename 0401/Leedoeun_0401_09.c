// 제목: 피보나치 수 구하기: DP방법2 - 메모하기(Memoization)을 이용
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

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