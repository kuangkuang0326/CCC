#include <stdio.h>
int main(void)
{
    int i, n;

    printf("请输入一个正数n:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        printf("%d的二次方是:%d", i, i * i);
        printf("\n");
    }
    return 0;
}