// Find the power of any number

#include<stdio.h>
#include<math.h>
int main()
{
    int base,expo,power;
    printf("Enter the base = ");
    scanf("%d",&base);
    printf("Enter the expo = ");
    scanf("%d",&expo);
    power=pow(base,expo); //using power function
    //printf("%d ^ %d = %d",base,expo,power);
    printf("The value is %d",power);
    return 0;
}