// 제목: 성적 처리 프로그램
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int num;            // 학번
    char name[20];      //이름
    int kor, eng, mat;  // 3과목 점수
    int tot;            // 총점
    double avg;         // 평균
    char grade;         // 학점
}Student;

void input_data(Student *pary);
void calc_data(Student *pary);
void sort_data(Student *pary);
void print_data(Student *pary);

int main(void)
{
    Student ary[3];     // 3명 학생의 성적
    input_data(ary);    // 학번, 이름, 3과목 점수 입력
    calc_data(ary);     // 총점, 평균, 학점 계산

    printf("# data before sorting..\n");
    print_data(ary);    // 정렬 전 출력
    sort_data(ary);     // 총점 순으로 내림차순
    printf("\n# data after sorting..\n");
    print_data(ary);    // 정렬 후 출력

    return 0;
}

void input_data(Student *pary)
{
    int i;

    for(i=0; i<3; i++){
        printf("> Number: ");
        scanf("%d", &pary->num);
        printf("> Name: ");
        scanf("%s", pary->name);
        printf("> Math, English, Writing: ");
        scanf("%d%d%d", &pary->mat, &pary->eng, &pary->kor);

        pary++;
    }
}

void print_data(Student *pary)
{
    int i;

    for(i=0; i<3; i++){
        printf("%5d%7s%5d%5d%5d%5d%7.1lf%5c\n", 
        pary->num, pary->name, pary->kor, pary->eng, pary->mat, pary->tot, pary->avg, pary->grade);
        
        pary++;
    }
}

void calc_data(Student *pary)
{
    int i;

    for(i=0; i<3; i++){
        pary->tot = pary->kor + pary->eng + pary->mat;
        pary->avg = pary->tot / 3.0;
        if(pary->avg >= 90.0) pary->grade = 'A';
        else if(pary->avg >= 80.0) pary->grade = 'B';
        else if(pary->avg >= 70.0) pary->grade = 'C';
        else pary->grade = 'F';

        pary++;
    }
}

void sort_data(Student *pary){
    Student temp;
    int i, j;
    int max;

    for(i=0; i<3; i++)
    {
        max = i;
        for(j=i+1; j<3; j++){
            if(pary[max].tot < pary[j].tot)
            {
                max = j;
            }
        }
        if(max != i)
        {
            temp = pary[max];
            pary[max] = pary[i];
            pary[i] = temp;
        }
    }
}