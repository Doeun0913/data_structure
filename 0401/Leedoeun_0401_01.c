// ����: ����ü�� ��ȯ�Ͽ� �� ������ �� ��ȯ
// �а�: ��ǻ�Ͱ��к�
// �й�, �̸�: 2023243137 �̵���

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

typedef struct {
    double left;
    double right;
}Vision;

Vision exchange(Vision robot);

int main(){
    Vision robot;
    printf(" Input Vision: ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);
    printf("Change Vision: %.1lf %.1lf\n", robot.left, robot.right);

    return 0;
}

Vision exchange( robot)
{
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}