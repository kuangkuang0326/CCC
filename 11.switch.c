#include <stdio.h>
int main(void)
{
    int a;
    printf("请输入一个数以便判断其为奇数还是偶数：");
    scanf("%d", &a);

    switch (a % 2)
    {
    case 1:
        puts("该数为奇数");
        break;
    case 0:
        puts("该数为偶数");
        break;

    default:
        puts("该数不是正数");
        break;
    }

    return 0;
}