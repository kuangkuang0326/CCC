#include <stdio.h>
int main(void)
{
    int i, n, j;
    printf("画一个金字塔");
    printf("金字塔层数n：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j < (n - i) * 2 + 1; j++)
        {
            printf("%d", i % 10);
        }
        for (j = 0; j < i - 1; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}