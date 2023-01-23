#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("The reverse of the digit of the number is =  %d",sum);

    return 0;
}