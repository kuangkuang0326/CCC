#include <stdio.h>
int main(void)
{
    double n1, n2, max;
    printf("请输入两个实数以便求差\n");
    printf("请输入第一个实数n1：");
    scanf("%lf", &n1);

    printf("请输入第二个实数n2：");
    scanf("%lf", &n2);

    max = n1 > n2 ? n1 - n2 : n2 - n1;
    printf("它们俩的商为%.2f（结果保留两位小数）", max);

    return 0;
}