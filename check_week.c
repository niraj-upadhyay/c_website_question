// WAP to input number and print week day

#include<stdio.h>
int main()
{
    int week;
    printf("Enter the week = ");
    scanf("%d",&week);
    if(week==1)
    {
        printf("Monday");
    }
    else if(week==2)
    {
        printf("Tuesday");
    }
    else if(week==3)
    {
        printf("Wednesday");
    }
    else if (week==4)
    {
        printf("Thrusday");
    }
    else if (week==5)
    {
        printf("Friday");
    }
    else if (week==6)
    {
        printf("Satuarday");
    }
    else if(week==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Please enter the 1 to 7");
    }
    return 0;
}