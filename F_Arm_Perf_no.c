#include <stdio.h>
void Armstrong(int a)
{
    int count = 0, c, r, i, sum = 0;
    c = a;
    while (a > 0)
    {
        count++;
        a = a / 10;
    }
    a = c;
    while (a > 0)
    {
        int p = 1;
        r = a % 10;
        for (i = 1; i <= count; i++)
        {
            p = p * r;
        }
        sum = sum + p;
        a = a / 10;
    }
    if (c == sum)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not Armstrong number\n");
    }
}
void perfectno(int b)
{
    int i, sum = 0;
    for (i = 1; i < b; i++)
    {
        if (b % i == 0)
        {
            sum = sum + i;
        }
    }
    if (b == sum)
    {
        printf("Perfect Number\n");
    }
    else
    {
        printf("Not perfect Number\n");
    }
}
int main()
{
    int n, a;
    printf("Enter the number = ");
    scanf("%d", &n);
    Armstrong(n);
    perfectno(n);
    return 0;
}