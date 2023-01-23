#include <stdio.h>
int sum(int x,int y, int z)
{
    int sum;
    sum=x+y+z;
    printf("sum of three number is %d",sum);
}
int main()
{
    int a, b, c;
    printf("Enter the three number = ");
    scanf("%d%d%d", &a, &b, &c);
    sum(a,b,c);
    return 0;
}