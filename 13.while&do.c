#include <stdio.h>
int main(void)
{
    int i, n, retry;
    do
    {
        printf("输入一个整数n:");
        scanf("%d", &n);

        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                printf("\n");
            }
        }
        printf("是否要继续？【Yes...0/No...9】:");
        scanf("%d", &retry);
        printf("\n");
    } while (retry == 0);

    return 0;
}