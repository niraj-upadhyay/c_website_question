#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the number a  = ");
    scanf("%d",&a);
    printf("Enter the number b = ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf(" a = %d b= %d",a,b);

    return 0;
}

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