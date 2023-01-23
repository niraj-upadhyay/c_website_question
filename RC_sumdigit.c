// #include<stdio.h>
// int main()
// {
//     int n,p,sum=0;
//     printf("Enter the number = ");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         p=n%10;
//         sum=sum+p;
//         n=n/10;
//     }
//     printf("The of the digit is %d",sum);
//     return 0;
// }

#include <stdio.h>

int sumDigit(int n)
{
    int p;
    int static sum=0;
    if (n == 0)
        return sum;
    else
    {
        if (n > 0)
        {
            p=n%10;
            sum=sum+p;
            return sumDigit(n/10);
        }
    }
}

int main()
{
    int n,a;
    printf("Enter the number = ");
    scanf("%d", &n);
    a = sumDigit(n);
    printf("%d",a);
    return 0;
}