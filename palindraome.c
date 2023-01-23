#include<stdio.h>
int main()
{
    int n,a,r,sum=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
       r=n%10;
       sum=sum*10+r;
       n=n/10;
    }
    if(a==sum)
    {
        printf("Palindrome Number ");
    }
    else
    {
        printf("Not Palindrome Number");
    }

    return 0;
}