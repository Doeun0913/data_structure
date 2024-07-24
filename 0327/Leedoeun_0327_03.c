// 제목: 구조체를 반환하여 두 변수의 값 교환
// 학과: 컴퓨터공학부
// 학번, 이름: 2023243137 이도은

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

struct vision{
    double left;
    double right;
};

struct vision exchange(struct vision robot);

int main(){
    struct vision robot;
    printf(" Input vision: ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);
    printf("Change vision: %.1lf %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot)
{
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}