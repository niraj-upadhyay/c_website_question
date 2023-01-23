#include <stdio.h>
int main()
{
    int n, temp, count = 0, r, i, max = 1, sum = 0;
    printf("Enter the number = ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    n = temp;
    while (n > 0)
    {
        max = 1;
        r = n % 10;
        for (i = 1; i <= count; i++)
        {
            max = max * r;
        }
        sum = sum + max;
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("Armstrong number ");
    }
    else
    {
        printf("Not Armstrong number ");
    }
    return 0;
}