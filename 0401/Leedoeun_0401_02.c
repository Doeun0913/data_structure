// ����: ���ȣ�� �Լ�(recursive call function)
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include <stdio.h>

void fruit(int count);

int main(void){
    fruit(1);

    return 0;
}

void fruit(int count){
    printf("count=%d, apple\n", count);

    if(count == 3) return;

    fruit(count+1);
    printf("count=%d, jam\n", count);
}