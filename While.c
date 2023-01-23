#include<stdio.h>
// int main()
// {
//     int i = 1;
//     while(i<=5)
//     {
//         printf("%d ",i);
//         i++;
//     }


//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i = 1;
//     do
//     {
//         printf("%d",i);
//         i++;
//     }while(i<=9);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number = ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }


    return 0;
}