#include <stdio.h>
int main()
{
    int n, i, fact = 1, num, r, temp, a, sum = 0;
    printf("Enter the number = ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        a = r; 
        fact=1;
        //num = num / 10;

        for (i = 1; i <= a; i++)
        {
            fact = fact * i;
        }
        sum=sum+fact;
        num = num / 10;
    }
    if(sum==temp)
    {
        printf("strong Number");
    }
    else
    {
        printf("Not strong Number");
    }

    return 0;
}