#include <stdio.h>
int main()
{
    int n, temp, count = 0, sum = 0, j,a;
    printf("Enter the number = ");
    scanf("%d", &n);
    temp = n;
    for (j = 1; j <= n; j++)
    {
        a=j;
        sum=0;
        
        while (n > 0)
        {
            count++;
            n = n / 10;
        }
        n = temp;

        while (n > 0)
        {
            int r, i;
            int max = 1;
            r = n % 10;
            for (i = 1; i <= count; i++)
            {
                max = max * r;
            }
            sum = sum + max;
            n = n / 10;
        }
        if (sum = a)
        {
            printf("%d",j);
        }
    }

    return 0;
}