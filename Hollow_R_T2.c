#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the rows = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {

            if (j == n || i == n||i+j==n+1 )
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