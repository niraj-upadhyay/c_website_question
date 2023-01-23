#include<stdio.h>
int main()
{
    int r,Diameter,Area;
    printf("Enter the radius = ");
    scanf("%d",&r);
    Diameter = 2*r;
    printf("Diameter of area is %d\n",Diameter);
    Area=3.14*r*r;
    printf("Area of circle is %d\n",Area);
    return 0;
}