#include <stdio.h>
int main(void)
{
    double a, b;
    printf("请输入两个实数.\n");

    printf("请输入实数a:");
    scanf("%lf", &a);

    printf("请输入实数b：");
    scanf("%lf", &b);

    printf("这两个数的平均数是:%f\n", (double)(a + b) / 2);
    printf("a*b=%f\n", a * b);
    printf("a-b=%f\n", a - b);

    return 0;
}