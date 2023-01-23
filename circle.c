//WAP in c to find the Diameter,Area,Circumference.
#include <stdio.h>
int circumference(int a)
{
    int c;
    c = 2 * 3.14 * a;
    return c;
}
int area(int b)
{
    int d;
    d = (int)3.14 * (b * b);
    return d;
}
int diameter(int g)
{
    int n;
    n = 2 * g;
    return n;
}
int main()
{
    int r, k, l, m;
    printf("Enter the radius = ");
    scanf("%d", &r);
    k = area(r);
    printf("Area of the circle %d\n", k);
    l = circumference(r);
    printf("Circumference of the circle %d\n", l);
    m = diameter(r);
    printf("Diameter of the circle %d\n", m);
    return 0;
}
