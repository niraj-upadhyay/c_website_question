#include<stdio.h>
int main()
{
    int base,expo,i,power=1;
    printf("Enter the base = ");
    scanf("%d",&base);
    printf("Enter the powe = ");
    scanf("%d",&expo);
    for(i=1;i<=expo;i++)
    {
        power=power*base;

    }
    printf("power of the number is = %d",power);
    return 0;
}