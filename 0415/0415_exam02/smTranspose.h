#pragma once
// ��� ���Ҹ� �����ϱ� ���� ����ü term ����
typedef struct{
    int row;
    int col;
    int value;
}term;

void smTranspose(term a[], term b[]);