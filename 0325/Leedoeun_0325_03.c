// 제목: 포인터 연산자를 이용해 변수 액세스하기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은
#include <stdio.h>

int main(){
    int i = 10, j =20;
    int *ptr;
    printf("\n i의 값 = %d \n j의 값 = %d", i, j);
    printf("\n i의 메모리 주소(&i) = %u", &i);
    printf("\n j의 메모리 주소(&j) = %u", &j);

    ptr = &i;
    printf("\n\n << ptr=&i 실행 >>");
    printf("\n ptr의 메모리 주소(&ptr) = %u", &ptr);
    printf("\n ptr의 값(ptr) = %u", ptr);
    printf("\n ptr의 참조 값(*ptr) = %d", *ptr);

    ptr = &j;
    printf("\n\n << ptr=&j 실행 >>");
    printf("\n ptr의 메모리 주소(&ptr) = %u", &ptr);
    printf("\n ptr의 값(ptr) = %u", ptr);
    printf("\n ptr의 참조 값(*ptr) = %d", *ptr);

    i = *ptr;
    printf("\n\n << i=*ptr 실행 >>");
    printf("\n i의 값 = %d", i);

    getchar();
}