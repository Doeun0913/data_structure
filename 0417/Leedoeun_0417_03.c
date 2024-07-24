// 제목: 포인터를 이용하여 연결리스트 구현
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include <stdio.h>
#include <stdlib.h>

struct list *create();
void print(struct list *head, int n);

struct list{
    int data;
    struct list *next;
};

struct list *create(){
    struct list *a, *b, *c;

    a = (struct list *)malloc(sizeof(struct list));
    b = (struct list *)malloc(sizeof(struct list));
    c = (struct list *)malloc(sizeof(struct list));
    a->data = 10;
    b->data = 20;
    c->data = 30;
    a->next = b;
    b->next = c;
    c->next = NULL;
    return a;
}

void print(struct list *head, int n){
    while(head){
        if(head->data == n)
            head = head->next;

        printf("%d\n", head->data);
        head = head->next;
    }
}

void main(){
    struct list *head;

    int num;
    head = create();
    // head struct형 포인터, create도 struct형 포인터 함수

    printf("input data of deleting node: ");
    scanf("%d", &num);
    print(head, num);
}