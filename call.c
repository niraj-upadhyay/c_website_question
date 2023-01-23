#include <stdio.h>
int sum()
{
    int a, b, s;
    printf("Enter the number = ");
    scanf("%d", &a);
    printf("Enter the number = ");
    scanf("%d", &b);
    s = a + b;
    printf("Addition of two number is %d\n", s);
}
int substract()
{
    int a, b, s;
    printf("Enter the number = ");
    scanf("%d", &a);
    printf("Enter the number = ");
    scanf("%d", &b);
    s = a - b;
    printf("Substract of two number is = %d\n", s);
}
int multiply()
{
    int a, b, m;
    printf("Enter the number = ");
    scanf("%d", &a);
    printf("Enter the number = ");
    scanf("%d", &b);
    m = a * b;
    printf("multiply of two number is = %d\n", m);
}
int divide()
{
    int a, b, d;
    printf("Enter the number = ");
    scanf("%d", &a);
    printf("Enter the number = ");
    scanf("%d", &b);
    d = a / b;
    printf("divide of two number is = %d\n", d);
}
int main()
{
    int n;
    printf("1.Add\n 2.substract\n 3.multiply\n 4.divide\n");
    while (1)
    {
        printf("Enter the choice = ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            sum();
            break;
        }
        case 2:
        {
            substract();
            break;
        }
        case 3:
        {
            multiply();
            break;
        }
        case 4:
        {
            divide();
            break;
        }
        default:
        {
            printf("Invalid option");
        }
        }
    }
    // sum();
    // substract();
    // multiply();
    // divide();
    return 0;
}