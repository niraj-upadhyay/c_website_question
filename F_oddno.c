// // WAP to print Even number
// #include <stdio.h>

// int evenno(int a, int b)
// {
//     int i;
//     for (i = a; i <= b; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d ", i);
//         }
//     }
// }

// void oddno(int a, int b)
// {
//     int i;
//     for (i = a; i <= b; i++)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d ", i);
//         }
//     }
// }

// int main()
// {
//     int a, b, i, choice = 1;
//     printf("Enter the lower limit = ");
//     scanf("%d", &a);
//     printf("Enter the lower limit = ");
//     scanf("%d", &b);

//     printf("1.odd\n2.Even\n");
//     while (1)
//     {

//         printf("\nChoose the option = ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             oddno(a, b);
//             break;

//             break;

//         case 2:
//             evenno(a, b);
//             break;
//         }
//     }
// }

#include <stdio.h>
int main()
{
    int a, b, i, sum = 0;
    printf("Enter the lower limit = ");
    scanf("%d", &a);
    printf("Enter the lower limit = ");
    scanf("%d", &b);
    for (i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            // printf("%d ",i);
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}