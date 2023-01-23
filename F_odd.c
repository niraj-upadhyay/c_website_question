#include<stdio.h>
int checknumber(int x)
{
    if(x%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}
int main()
{
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    checknumber(a);
    return 0;
}