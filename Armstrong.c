#include <stdio.h>
#include <math.h>
int main()
{
    int n, r, sum = 0, temp, count = 0, max = 1, j, num,ab;
    printf("Enter the number = ");
    scanf("%d", &n);
    // temp = n;
    for (j = 1; j <= n; j++)
    {
        num = j;
        sum = 0;
        count = (int) log10(num) + 1;
        while (num != 0)
        {
            r = num % 10;
            max = 1;
            for (int i = 1; i <= count; i++)
            {
                max = max * r;
            }
            sum = sum + max;
            num = num / 10;
        }
        if (sum == j)
        {
            printf("%d\n", j);
        }
    }
    return 0;
}