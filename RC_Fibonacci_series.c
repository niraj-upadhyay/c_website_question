// #include<stdio.h>
// int main()
// {
//     int n,a=0,b=1,i,s;
//     printf("Enter the limit = ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         printf("%d ",a);
//         s=a+b;
//         a=b;
//         b=s;
//     }
//     return 0;
// }

#include <stdio.h>

int fibbo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibbo(n - 1) + fibbo(n - 2);
}

int main()
{
    int a, r, i;
    printf("Enter the number = ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        r = fibbo(i);
        printf("%d ",r );
    }
    return 0;
}