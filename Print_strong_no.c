#include <stdio.h>
int main()
{
    int n, i, fact = 1, num, r, temp, a, sum = 0, j,ab;
    printf("Enter the number = ");
    scanf("%d", &num);
    temp = num;
    for (j = 1; j <= num; j++)
    {
        ab=j;
        sum = 0;
        while (ab > 0)
        {
            r = ab % 10;
            a = r;
            fact = 1;
            // num = num / 10;

            for (i = 1; i <= a; i++)
            {
                fact = fact * i;
            }
            sum = sum + fact;
            ab = ab / 10;
        }
        if (sum == j)
        {
            printf("%d\n",j);
        }
    }

    return 0;
}