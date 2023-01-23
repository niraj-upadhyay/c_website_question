// #include<stdio.h>
// int main()
// {
//     int a,b,p,q,GCD,LCM;
//     printf("Enter the first number = ");
//     scanf("%d",&a);
//     printf("Enter the second number = ");
//     scanf("%d",&b);
//     p=a;
//     q=b;
//     while(a!=b)
//     {
//         if(a>b)
//         {
//             a=a-b;
//         }
//         else
//         {
//             b=b-a;
//         }
//     }
//     printf("GCD of two number is = %d\n",a);
//     GCD=a;
//     LCM=(p*q)/GCD;
//     printf("LCM of two number is = %d",LCM);

//     return 0;
// }


#include<stdio.h>

int Hcf(int x,int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return Hcf(y,x%y);
    }
}
int main()
{
    int a,b,p;
    printf("Enter the number = ");
    scanf("%d",&a);
    printf("Enter the number = ");
    scanf("%d",&b);
    p=Hcf(a,b);
    printf("%d",p);
    return 0;
}