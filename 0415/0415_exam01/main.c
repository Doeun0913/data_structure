#include "change.h"

int main(){
    int a = 30, b = 100;
    change(&a, &b);   // �Լ��� ȣ��

    printf("a: %d, b: %d", a, b);
    return 0;       
}