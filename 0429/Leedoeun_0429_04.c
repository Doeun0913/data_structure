// ����: �ܼ� ���Ḯ��Ʈ
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

typedef struct Node{
    int value;          // ��
    struct Node *pNext; // ���� ����� �ּҸ� ����
}Node;

Node *head = NULL;  // ���� ����� �ּҸ� �����ϴ� ������(��������)

void printListNode();
void unInitList();
void deleteNode();
void reverseNode();
void insertNodeOrder();

int main(){
    int choice;

    while(1){
        system("cls");
        printf("*** �޴����� ***\n");
        printf("1. ��� ����\n");
        printf("2. ��� ���\n");
        printf("3. ��� ����\n");
        printf("4. ���� ����\n");
        printf("0. ����\n");
        printf("�޴�����: [ ]\b\b");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                insertNodeOrder();  // �����ϸ鼭 ����
                break;
            case 2:
                printListNode();
                break;
            case 3:
                deleteNode();
                break;
            case 4:
                reverseNode();
                break;
            case 0:
                unInitList();
                exit(0);
        }

        system("pause");    // �Ͻô��
    }

    return 0;
}

void insertNodeOrder(){
    Node *newNode, *curNode = NULL, *prevNode = NULL;

    newNode = (Node*)malloc(sizeof(Node));

    printf("\n���� �Է�: ");
    scanf("%d", &newNode->value);
    newNode->pNext = NULL;

    // 1. ������ ���
    if(head == NULL){
        head = newNode;
        printf("����Ʈ�� ��� �־� ù ��� �߰�\n");
        return;
    }

    // 2. ù ��忡 ����� ���� �� ����� ������ ū ���
    if(head->value > newNode->value){
        newNode->pNext = head;  // ù ��° ��带 ���� ���� ��� �ڷ� �̵�
        head = newNode;         // �� ��尡 head�� �ȴ�
        printf("���� ���� �� �Է����� �� �� ����\n");
        return;
    }

    // 3. ��ȸ�ϸ� �� ��
    curNode = prevNode = head;
    while(curNode->pNext != NULL){  // ���� ��尡 �ִٸ� �ݺ�(������ ��� ����)
        curNode = curNode->pNext;   // ���� ���� �̵�

        if(curNode->value > newNode->value){
            newNode->pNext = curNode;   // �� ���� ���� ��� ����
            prevNode->pNext = newNode;  // ���� ���� �� ��� ����
            printf("���ĵ� ������ ��� ����(��������)\n");
            return;
        }
        prevNode = prevNode->pNext; // ���� ���� �̵�
    }

    // 4. ������ ���� �߰��Ǵ� ���
    curNode->pNext = newNode;
    printf("���� ū �� �Է����� ������ ���� ����\n");
}

void reverseNode(){
    Node *prevNode = NULL, *curNode = NULL, *nextNode = NULL;

    // 1. �� ����̰ų� ��尡 1���� ���
    if(head == NULL || head->pNext == NULL){
        return;
    }

    prevNode = head;            // ù ��° ���
    curNode = prevNode->pNext;  // �� ��° ���
    prevNode->pNext = NULL;     // ù ��° ��带 ������ ���� ����ϱ� ���� NULL�� �ʱ�ȭ

    while(curNode->pNext != NULL){
        nextNode = curNode->pNext;
        curNode->pNext = prevNode;
        prevNode = curNode;
        curNode = nextNode;
    }

    curNode->pNext = prevNode;
    head = curNode;
    printf("\n\n\t\t����Ʈ ���� �����߽��ϴ�.\n");
}

void deleteNode(){
    int num;
    Node *delNode = NULL, *curNode = NULL;

    // 1. �� ����� ���
    if(head == NULL){
        printf("\n\n\t\t���Ḯ��Ʈ�� ����ֽ��ϴ�.\n");
        return;
    }

    printf("\n�����ϰ��� �ϴ� �� �Է�: ");
    scanf("%d", &num);

    // 2. ������ ��尡 ù ���� ����� ���
    if(head->value == num){
        delNode = head;     // ������ ��� ����
        head = head->pNext; // head�� ���� ���� ����
        free(delNode);
        printf("\n\n\t\tù ���� ��� %d����\n", num);
        return;
    }

    curNode = head;
    while(curNode->pNext != NULL){  // ����� ������ �̵�
        delNode = curNode->pNext;   // ������ ��� = ���� ����� �ּ�
        if(delNode->value == num){  // ���� ����� �ּҿ� ������ ���� ��带 ����
            curNode->pNext = delNode->pNext;
            free(delNode);
            printf("\n\n\t\t�߰� ��� ������ ��: %d\n", num);
        }

        if(curNode->pNext != NULL)
            curNode = curNode->pNext;
    }
}

void unInitList(){   // �ð� ���⵵: 0(n)
    Node *delNode;

    if(head == NULL){
        printf("\n\n\t\t���� ����Ʈ�� ��� �ֽ��ϴ�.\n");
        return;
    }

    while(head != NULL){
        delNode = head;
        head = head->pNext;
        free(delNode);
        printf("���� �޸� ��� ����\n");
    }
}

void printListNode(){
    Node *curNode;

    if(head == NULL){
        printf("\n\n\t\t���� ����Ʈ�� ��� �ֽ��ϴ�.\n");
        return;
    }

    curNode = head;

    while(curNode->pNext != NULL){  // ��ȸ
        printf("%d -> ", curNode->value);
        curNode = curNode->pNext;
    }

    printf("%d\n", curNode->value);
}