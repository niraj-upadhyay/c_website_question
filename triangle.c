// WAP to check the triangle is valid by using angle or not

#include<stdio.h>
int main()
{
    int angle1,angle2,angle3,sum;
    printf("Enter the first angle = ");
    scanf("%d",&angle1);
    printf("Enter the second angle = ");
    scanf("%d",&angle2);
    printf("Enter the Third angle = ");
    scanf("%d",&angle3);
    sum=angle1+angle2+angle3;
    if(sum==180 && angle1>0 && angle2>0 && angle3>0)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    
    return 0;
}