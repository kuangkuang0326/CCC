#include <stdio.h>
int main(void)
{
    int i, n, j;
    printf("画一个金字塔\n");
    printf("金字塔层数n：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i - 1) * 2 + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}