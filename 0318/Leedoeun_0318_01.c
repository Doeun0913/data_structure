// ����: ����01 - �迭�� �ݺ����� ����� ���� ó�� ���α׷�
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���
#include <stdio.h>

int main(void)
{
    int score[5] = {1, 2, 3, 4, 5};
    int i;
    int total = 0;
    double avg;

    for(i=0; i<5; i++)
        scanf("%d", &score[i]);
    
    for(i=0; i<5; i++)
        total += score[i];  // total = total + score[i]

    for(i=0; i<5; i++)
        printf("%5d", score[i]);

    avg = total / 5.0;
    printf("\n");
    printf("���: %.1lf\n", avg);
}
