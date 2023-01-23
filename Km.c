#include<stdio.h>
int main()
{
    float m,km,cm;
    printf("Enter the length in cm = ");
    scanf("%f",&cm);
    m=cm/100.0;
    km=cm/100000.0;
    printf("meter is %f\n",m);
    printf("Kilometer is %f",km);


    return 0;
}