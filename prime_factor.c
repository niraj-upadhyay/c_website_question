#include <stdio.h>
int main()
{
    int n, i, count = 0, num, j, sum = 0, k;
    printf("Enter the number = ");
    scanf("%d", &num);
    for (k = 1; k <= num; k++)
    {
        if (num % k == 0)
        {
            // printf("%d\n", k);

            for (j = 1; j <= k; j++)
            {
                count = 0;
                for (i = 1; i <= k; i++)
                {
                    if (k % i == 0)
                    {
                        count++;
                    }
                }
                if (count == 2)
                {
                    printf("%d\n", k);
                    
                }
                break;
            }
            
        }
    }
    // printf("The sum of prime number is %d",sum);
    return 0;
}