#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number = ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is greater");
    }
    else
    {
        printf("b is greater");
    }
    return 0;
}