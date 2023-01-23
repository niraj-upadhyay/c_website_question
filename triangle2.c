// WAP to check the triangle is valid or not by using side

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the first side1 = ");
    scanf("%d", &side1);
    printf("Enter the second side2 = ");
    scanf("%d", &side2);
    printf("Enter the Third side3 = ");
    scanf("%d", &side3);
    if (((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2))
    {
        printf("Tringle is valid");
    }
    else
    {
        printf("Tringle is not valid");
    }
    return 0;
}