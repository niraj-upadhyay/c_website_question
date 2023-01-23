// WAP to find the compound interest

#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,CI;
    printf("Enter the principal = ");
    scanf("%f",&p);
    printf("Enter the rate = ");
    scanf("%f",&r);
    printf("Enter the Time = ");
    scanf("%f",&t);
    CI=p*(pow((1+r/100),t));
    printf("The compound interest = %.2f",CI);
    return 0;
}