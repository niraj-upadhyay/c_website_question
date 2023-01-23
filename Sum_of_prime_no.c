#include <stdio.h>
int main()
{
    int n, i, count = 0, num, j,sum=0;
    printf("Enter the number = ");
    scanf("%d", &num);
    for (j = 1; j <= num; j++)
    {
        count=0;
        for (i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            //printf("%d\n", j);
            sum=sum+j;
        }
    }
    printf("The sum of prime number is %d",sum);
    return 0;
}