// #include<stdio.h>
// int main()
// {
//     int a,cube;
//     printf("Enter the number = ");
//     scanf("%d",&a);
//     cube = a*a*a;
//     printf("cube of the number is %d",cube);
//     return 0;
// }
#include<stdio.h>
int cube(int n)
{
    int c = n*n*n;
    return c;
}
int main()
{
    int a,r;
    printf("Enter the number = ");
    scanf("%d",&a);
    r=cube(a);
    printf("Cube of a number is %d",r);
    return 0;
}