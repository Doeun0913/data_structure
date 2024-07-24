#include "hap.h"

int hap(int x){     // 함수의 선언
    int i, sum = 0;
    for(i=0; i<=x; i++)
        sum = sum + i;
    return sum;
}