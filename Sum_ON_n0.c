#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the range of the number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("Sum the odd natural no is %d",sum);
    return 0;
}