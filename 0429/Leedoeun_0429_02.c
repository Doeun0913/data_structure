// ����: �Ʒ� �ڵ��� �������� �ľ�����
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include <stdio.h>

int main(){
    int n;
    printf("input number of student: ");
    scanf("%d", &n);

    int score[n];

    for(int i=0; i<n; i++)
        score[i] = i;
    
    for(int i=0; i<n; i++)
        printf("score[%d]: %d\n", i, score[i]);

    return 0;
}