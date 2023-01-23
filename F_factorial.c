// #include<stdio.h>
// int main()
// {
//     int n,i,fact=1;
//     printf("Enter the number = ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     printf("%d",fact);
//     return 0;
// }

#include<stdio.h>

int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    //printf("%d",fact);
    return fact;
}

int main()
{
    int x,r;
    printf("Enter the number = ");
    scanf("%d",&x);
    r=factorial(x);
    printf("%d",r);


    return 0;
}
