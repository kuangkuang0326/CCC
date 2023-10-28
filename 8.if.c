#include <stdio.h>
int main(void)
{
    double a, b, c, d, max;
    printf("请输入四个数以便选出最大的数：\n");
    printf("请输入第一个实数");
    scanf("%lf", &a);

    printf("请输入第二个实数：");
    scanf("%lf", &b);

    printf("请输入第三个实数：");
    scanf("%lf", &c);

    printf("请输入第四个实数：");
    scanf("%lf", &d);

    max = a;
    if (b >= a)
    {
        max = b;
    }
    if (c >= b)
    {
        max = c;
    }
    if (d >= c)
    {
        max = d;
    }

    printf("最大的数为%.2f(结果保留两位小数)", max);

    return 0;
}