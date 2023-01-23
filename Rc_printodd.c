#include<stdio.h>
int oddno(int a,int b)
{
    if(a>b)
    {
        return 0;
    }
    else
    {
        printf("%d ",a);
        return oddno(a+2,b);
    }
}

int main()
{
    int a,b;
    printf("Enter the lower limit = ");
    scanf("%d",&a);
    printf("Enter the upper limit = ");
    scanf("%d",&b);
    oddno(a,b);
    return 0;
}