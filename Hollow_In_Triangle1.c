#include <stdio.h>
int main()
{
    int n, i, space, j;
    printf("Enter the rows = ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (space = 1; space <= n - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i==n||i==j||j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}