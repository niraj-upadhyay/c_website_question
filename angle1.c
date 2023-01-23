// Area of Right angle triangle

#include<stdio.h>
int main()
{
    float h,b,area;
    printf("Enter the base = ");
    scanf("%f",&b);
    printf("Enter the height = ");
    scanf("%f",&h);
    area=(b*h)/2;
    printf("Area of triangle is =  %.2f sq unit",area);
    return 0;
}