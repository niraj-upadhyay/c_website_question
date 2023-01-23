// Question 16

// #include<stdio.h>
// int main()
// {
//     int size,i;
//     printf("Enter the size = ");
//     scanf("%d",&size);
//     int a[size];
//     printf("Enter the array Element = ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Reverse array Element are = ");
//     for(i=size-1;i>=0;i--)
//     {
//         printf("%d ",a[i]);
//     }

//     return 0;
// }

// Question 17;

// #include <stdio.h>
// int main()
// {
//     int size, i, j = 0, k = 0;
//     printf("Enter the size = ");
//     scanf("%d", &size);
//     int a[size];
//     int even[size];
//     int odd[size];

//     printf("Enter the array Element = ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     // printf("Even element are = ");
//     for (i = 0; i < size; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             even[j] = a[i];
//             j++;
//         }
//         else
//         {
//             odd[k] = a[i];
//             k++;
//         }
//     }
//     printf("Even element of the array = ");
//     for (i = 0; i < j; i++)
//     {
//         printf("%d", even[i]);
//     }
//     printf("\nOdd element of the array = ");
//     for (i = 0; i < k; i++)
//     {
//         printf("%d", odd[i]);
//     }
//     return 0;
// }

// Question 18;

// #include<stdio.h>
// int main()
// {
//     int size,i,num;
//     printf("Enter the size = ");
//     scanf("%d",&size);
//     int a[size];
//     printf("Enter the array Element = ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     printf("Enter the number = ");
//     scanf("%d",&num);

//     for(i=0;i<size;i++)
//     {
//         if(a[i]==num)
//         {
//             printf("Yes this number is present at index = %d ",i);
//             break;
//         }
//     }
//     if(size==i)
//     {
//         printf("Element does not found");
//     }
// }

// Question 19;

// #include <stdio.h>
// int main()
// {
//     int size, i, j, temp;
//     printf("Enter the size = ");
//     scanf("%d", &size);
//     int a[size];
//     printf("Enter the array Element = ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < size; i++)
//     {
//         for (j = i + 1; j < size; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     printf("Array in acending order = ");
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

// Question 20;

// #include <stdio.h>
// int main()
// {
//     int size, i, j, temp, x, n;
//     printf("Enter the size = ");
//     scanf("%d", &size);
//     int a[size];
//     printf("Enter the array Element = ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the number you want to shift = ");
//     scanf("%d", &n);
//     for (j = 1; j <= n; j++)
//     {
//         x = a[0];

//         for (i = 0; i < size - 1; i++)
//         {
//             a[i] = a[i + 1];
//         }
//         a[size - 1] = x;
//     }
//     printf("left Shifted array element are = ");
//     for(i=0;i<size;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

// Question 21;


#include <stdio.h>
int main()
{
    int size, i, j, temp, x, n;
    printf("Enter the size = ");
    scanf("%d", &size);
    int a[size];
    printf("Enter the array Element = ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to shift = ");
    scanf("%d", &n);                          
    for (j = 1; j <= n; j++)
    {
        x = a[size-1];

        for (i = size-1; i>=0; i--)
        {
            a[i+1] = a[i];
        }
        a[0] = x;
    }
    printf("Right rotation of array  element are = ");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}

