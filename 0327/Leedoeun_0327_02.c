// 제목: 화살표 연산자를 이용해 데이터 항목 참조하기
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct employee{
    char name[100];
    int year;
    int pay;
};

void main(){
    struct employee Lee;
    struct employee *Sptr = &Lee;
    strcpy(Sptr->name, "이순신");
    Sptr->year = 2023;
    Sptr->pay = 5900;

    printf("\n 이름: %s", Sptr->name);  // (*Sptr).name
    printf("\n 입사: %d", Sptr->year);  // (*Sptr).year
    printf("\n 연봉: %d", Sptr->pay);   // (*Sptr).pay
}
