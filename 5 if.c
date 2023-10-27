#include <stdio.h>
int main(void)
{
    int a;
    printf("请输入一个数：");
    scanf("%d", &a);
    if (a % 5)

        puts("输入的数不能被5整除");

    else

        puts("输入的数可以被5整除");
    return 0;
}