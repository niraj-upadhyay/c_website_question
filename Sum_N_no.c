#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the range of the number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+i;
    }
    printf("Sum the natural no is %d",sum);
    return 0;
}