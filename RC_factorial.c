#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n,p;
    printf("Enter the number = ");
    scanf("%d",&n);
    p=fact(n);
    printf("%d",p);
    return 0;
}