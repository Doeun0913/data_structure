// ����: ����02 - �Է��� ���ڱ��� ���������� ����ϱ�
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���
#include <stdio.h>

int main(void)
{
    int i=0, j=0, n;
    int multiply[9];
    printf("\n 1~9�� ������ �Է��ϼ���: ");

    while(0.001){
        scanf("%d", &n);
        if(n<0 || n>9)
            printf("\n 1~9�� ������ �Է��ϼ���: ");
        else
            break;
    }

    printf("\n");
    for(i=0; i<9; i++)
    {
        for(j=2; j<=n; j++){
            multiply[i] = j*(i+1);
            printf("%d x %d = %d\t", j, i+1, multiply[i]);
        }
        printf("\n");
    }
}