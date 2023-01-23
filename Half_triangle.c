#include <stdio.h>
int main()
{
    system("color 1E");
    int i, j;
    for (i = 1; i <=8; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}