#include <stdio.h>
int main()
{
    int row, column, i, j;
    printf("Enter the row = ");
    scanf("%d", &row);
    printf("Enter the column = ");
    scanf("%d", &column);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}