#include<stdio.h>
int main()
{
    int l,b,perimeter,Area;
    printf("Enter the Length = ");
    scanf("%d",&l);
    printf("Enter the breadth = ");
    scanf("%d",&b);
    perimeter =2*(l+b);
    printf("Perimeter of rectangle is %d\n",perimeter);
    Area=l*b;
    printf("Area of rectangle %d\n",Area);
    return 0;
}