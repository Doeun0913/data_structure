// ����: �ڱ� ���� ����ü�� ����
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include <stdio.h>

struct list{
    int data;
    struct list *next;
}a, b, c, d;

void main(){
    struct list *head;
    head = &a;

    a.data = 1;
    b.data = 2;
    c.data = 3;
    d.data = 4;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    while(head){
        printf("Address head: %u\n", head);
        printf("   %d\n", head->data);
        head = head->next;
    }
    printf("Last head: %s\n", head);
}