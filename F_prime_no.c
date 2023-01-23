#include <stdio.h>
int primenumber(int x, int y)
{
    int i, j, count = 0;

    for (j = x; j <= y; j++)
    {
        count = 0;
        for (i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", j);
        }
    }
}
int main()
{
    int p, q;

    printf("Enter the lower limit = ");
    scanf("%d", &p);

    printf("Enter the upper limit = ");
    scanf("%d", &q);
    primenumber(p, q);

    return 0;
}
