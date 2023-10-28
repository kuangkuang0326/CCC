#include <stdio.h>
int main(void)
{
    double n1, n2, max;
    printf("请输入两个数来比大小：\n");

    printf("请输入第一个数n1：");
    scanf("%lf", &n1);

    printf("请输入第二个数n2：");
    scanf("%lf", &n2);

    max = (n1 > n2) ? n1 : n2;

    printf("较大的数是：%f", max);

    return 0;
}