// ����: �޸� �����Ҵ��� ���� - malloc()�� free() �Լ�
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("input number of students: ");
    scanf("%d", &n);

    int *score = (int*)malloc(n * sizeof(int)); // ���� �޸� �Ҵ�

    if(score == NULL){  // �޸� �Ҵ��� ������ ����
        printf("Memory allocation failed. Exiting program.\n");
        return -1;  // ���α׷� ����
    }

    for(int i=0; i<n; i++)
        score[i] = i;

    for(int i=0; i<n; i++)
        printf("score[%d]: %d\n", i, score[i]);

    free(score);    // �������� Ȱ��� �޸� ��ü
    return 0;
}