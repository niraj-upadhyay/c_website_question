#include <stdio.h>
int main()
{
    int n;
    printf("Enter the choice = ");
    scanf("%d", &n);
    switch (n > 0)
    {
    case 1:
    {
        printf("positive number");
        break;
    }
    case 0:
        switch (n < 0)
        {
        case 1:
        {
            printf("Negative number");
            break;
        }
        case 0:
        {
            printf("Zero");
            break;
        }
        }
    }

    return 0;
}