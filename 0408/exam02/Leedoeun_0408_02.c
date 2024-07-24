// 제목: c언어 분할 컴파일 실습(1~100까지 합을 구하는 프로그램)
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>
#include "hap.h"

int hap(int);  // 함수의 선언

int main(){
    int num, sum;
    sum = hap(100);
    printf("input number: ");
    scanf("%d", &num);
    sum = hap(num);     // 함수의 호출
    printf("i: %d\t sum: %d", 100, sum);
    return 0;
}