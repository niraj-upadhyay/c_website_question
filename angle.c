// Find the third angle of triangle

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first angle= ");
    scanf("%d",&a);
    printf("Enter the second angle= ");
    scanf("%d",&b);
    c=180-(a+b);
    printf("Third angle is %d",c);

    return 0;
}