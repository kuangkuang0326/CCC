#include <stdio.h>
int main(void)
{
    int a;
    printf("请输入一个数");
    scanf("%d", &a);
    if (a > 0)
        if (a % 2 == 0)
        {
            printf("这个数是偶数");
        }
        else
        {
            printf("这个数是奇数");
        }
    else
        printf("这个数不是正数");
    return 0;
}