// #include<stdio.h>
// int main()
// {
//     int n,a=-1,b=1,c,i;
//     printf("Enter the range = ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         c=a+b;
//         printf("%d ",c);
//         a=b;
//         b=c;

//     }

//     return 0;
// }

#include<stdio.h>
int fibbo(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fibbo(n-1)+fibbo(n-2);
    }
}

int main()
{
    int n,fibbo;
    printf("Enter the number = ");
    scanf("%d",&n);

    return 0;
}