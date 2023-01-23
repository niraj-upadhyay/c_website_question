// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("Enter the number = ");
//     scanf("%d",&n);
//     for(i=1;i<n;i++)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }

#include<stdio.h>
int naturalNo(int a,int b)
{
    int i;
    for(i=a;i<b;i++)
    {
        printf("%d ",i);
    }
}



int main()
{
    int x,y;
    printf("Enter the lower limit = ");
    scanf("%d",&x);
    printf("Enter the upper limit = ");
    scanf("%d",&y);
    naturalNo(x,y);

    return 0;
}