#include <stdio.h>
int main(void)
{
    int a;

    printf("请输入一个整数：");

    scanf("%d", &a);

    printf("他的五倍数是：%d\n", 5 * a);

    return 0;
}