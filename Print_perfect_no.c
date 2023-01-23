#include <stdio.h>
int main()
{
    int n, i, sum = 0, j, num;
    printf("Enter the number = ");
    scanf("%d", &num);
    for (j = 1; j <=num; j++)
    {
        sum=0;

        for (i = 1; i<j; i++)
        {
            if (j % i == 0)
            {
                sum = sum + i;
            }
        }
        if(sum==j)
        {
            printf("%d\n",j);
        }
    }
    return 0;
}