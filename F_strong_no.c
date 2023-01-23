#include <stdio.h>

int strongnumber(int x,int y)
{
   int n, temp, fact, a, r, i, j, sum = 0,p;

    for (j = x; j <= y; j++)
    {
        p=j;
        sum=0;

        while (p > 0)
        {
            r = p % 10;
            a = r;
            fact = 1;
            for (i = 1; i <= a; i++)
            {
                fact = fact * i;
            }
            sum = sum + fact;
            p = p / 10;
        }

        if (sum == j)
        {
            printf("%d\n",j);
        }
    }
}

int main()
{
    int a,b;
    printf("Enter the lower limit = ");
    scanf("%d",&a);
    printf("Enter the upper limit = ");
    scanf("%d",&b);

    strongnumber(a,b);

    return 0;
}



// #include <stdio.h>
// int main()
// {
//     int n, temp, fact, a, r, i, j, sum = 0,p;
//     printf("Enter the number = ");
//     scanf("%d", &n);
//     temp = n;
//     for (j = 1; j <= n; j++)
//     {
//         p=j;
//         sum=0;

//         while (p > 0)
//         {
//             r = p % 10;
//             a = r;
//             fact = 1;
//             for (i = 1; i <= a; i++)
//             {
//                 fact = fact * i;
//             }
//             sum = sum + fact;
//             p = p / 10;
//         }

//         if (sum == j)
//         {
//             printf("%d\n",j);
//         }
//     }

//     return 0;
// }