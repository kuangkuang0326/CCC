#include <stdio.h>
int main(void)
{
    int i, n, j;
    printf("画一个直角在右上角的直角三角形\n");
    printf("请输入短边长n：");
    scanf("%d,&n");

    for (i = n; i >= 0; i--)
    {

        for (j = 1; j <= n - i; j++)
        {
            putchar(' ');
            //    putchar用单引号
        }
        for (j = 1; j <= i; j++)
        {
            putchar('*');
        }

        printf("\n");
    }
    return 0;
}