// ����: c��� ���� ������ �ǽ�(1~100���� ���� ���ϴ� ���α׷�)
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���
#include <stdio.h>
#include "hap.h"

int hap(int);  // �Լ��� ����

int main(){
    int num, sum;
    sum = hap(100);
    printf("input number: ");
    scanf("%d", &num);
    sum = hap(num);     // �Լ��� ȣ��
    printf("i: %d\t sum: %d", 100, sum);
    return 0;
}