// ����: �����͸� �̿��� ���ڿ� ó���ϱ�
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���
#include <stdio.h>

int main(){
    int i;
    char string1[20] = "Love Sunmoon !!!", string2[20], *ptr1, *ptr2;

    ptr1 = string1;
    printf("\n string1�� �ּ� = %u \t ptr1 = %u", string1, ptr1);
    printf("\n string1 = %s \n ptr1 = %s ", string1, ptr1);
    printf("\n\n %s", ptr1 + 8);
    ptr2 = &string1[8];
    printf("\n %s \n\n ", ptr2);

    for(i=16; i>=0; i--){
        putchar(*(ptr1 + i));
    }
    for(i=0; i<20; i++){
        string2[i] = *(ptr1 + i);
    }
    printf("\n\n string1 = %s", string1);
    printf("\n string2 = %s", string2);

    *ptr1 = 'L';
    *(ptr1 + 1) = 'i';
    *(ptr1 + 2) = 'k';
    *(ptr1 + 3) = 'e';
    printf("\n\n string1 = %s\n", string1);

    getchar();
}