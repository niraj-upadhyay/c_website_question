#include<stdio.h>

int power(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    else
    {
        return x*power(x,y-1);
    }
}

int main()
{
    int a,b,r;
    printf("Enter the base = ");
    scanf("%d",&a);
    printf("Enter the base = ");
    scanf("%d",&b);
    r=power(a,b);
    printf("%d",r);
    return 0;
}