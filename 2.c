#include <stdio.h>

int main(void)
{
    int a, b;
    printf("请输入两个整数：");

    printf("请输入整数a：");
    scanf("%d", &a);

    printf("请输入整数b：");
    scanf("%d", &b);

    printf("a除以b的商为%d,余%d.", a / b, a % b);

    return 0;
}