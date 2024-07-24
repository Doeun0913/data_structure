#include "change.h"

int main(){
    int a = 30, b = 100;
    change(&a, &b);   // 함수의 호출

    printf("a: %d, b: %d", a, b);
    return 0;       
}