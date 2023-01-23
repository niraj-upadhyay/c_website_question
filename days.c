#include<stdio.h>
int main()
{
    int days,week, y,w;
    printf("Enter the days = ");
    scanf("%d",&days);
    y=days/365;
    w=days/7;
    printf("year is %d\n",y);
    printf("week is %d",w);
    return 0;
}