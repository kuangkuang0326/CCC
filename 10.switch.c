#include <stdio.h>
int main(void)
{
    int a;
    printf("请输入月份以便判断季节:");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
    case 2:
        puts("该月是冬季");
        break;
    case 3:
    case 4:
    case 5:
        puts("该月是春季");
        break;
    case 6:
    case 7:
    case 8:
        puts("该月是夏季");
        break;
    case 9:
    case 10:
    case 11:
        puts("该月是秋季");
        break;
    case 12:
        puts("该月是冬季");
        break;
    default:
        puts("不存在这个月份");
        break;
    }
    return 0;
}