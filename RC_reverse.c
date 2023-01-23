// #include<stdio.h>
// int main()
// {
//     int a,r ;
//     printf("Enter the number = ");
//     scanf("%d",&a);
//     while(a>0)
//     {
//         r=a%10;
//         printf("%d",r);
//         a=a/10;
        

//     }

//     return 0;
// }

#include<stdio.h>

int reverse( int a)
{
    int r,sum=0;

    if(a>0)
    {
        r=a%10;
        sum=sum*10+r;
        printf("%d",sum);
        reverse(a/10);
    }
    //printf("%d",sum);

    // else
    // {
    //     printf("%d",sum);
    // }
}

int main()
{
    int a,reve,x;
    printf("Enter the number = ");
    scanf("%d",&a);
    reverse(a);
    //printf("%d",x);
    return 0;
}