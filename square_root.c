// Find the square root of the number

#include<stdio.h>
#include<math.h>
int main()
{
    float root,num;
    printf("Enter the value = ");
    scanf("%f",&num);
    root=sqrt(num);
    printf("The square root is %f",root);
    return 0;
}