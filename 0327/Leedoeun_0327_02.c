// ����: ȭ��ǥ �����ڸ� �̿��� ������ �׸� �����ϱ�
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

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
    strcpy(Sptr->name, "�̼���");
    Sptr->year = 2023;
    Sptr->pay = 5900;

    printf("\n �̸�: %s", Sptr->name);  // (*Sptr).name
    printf("\n �Ի�: %d", Sptr->year);  // (*Sptr).year
    printf("\n ����: %d", Sptr->pay);   // (*Sptr).pay
}
