#include<stdio.h>
int naturalno(int a , int b)
{
    if(a==b)
    {
        return a;
    }
    else
    {
        return a + naturalno(a+1,b);
    }
}
int main()
{
    int a,b,x;
    printf("Enter the lower limit = ");
    scanf("%d",&a);
    printf("Enter the lower limit = ");
    scanf("%d",&b);
    x=naturalno(a,b);
    printf("%d",x);
    return 0;
}




// #include<stdio.h>
// int naturalno(int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n+naturalno(n-1);
//     }
// }

// int main()
// {
//     int n,r;
//     printf("Enter the number = ");
//     scanf("%d",&n);
//     r=naturalno(n);
//     printf("%d",r);
//     return 0;
// }