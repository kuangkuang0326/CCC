#include <stdio.h>
int main(void)
{
    int i, n, j;
    printf("画一个直角三角形\n");
    printf("请输入短边n:");
    scanf("%d", &n);

    for (i = n; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}