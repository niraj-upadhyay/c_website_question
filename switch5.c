#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1 :
        {
            printf("Even number");
            break;
        }
        case 0 :
        {
            printf("Odd number");
            break;
        }

    }
    return 0;
}