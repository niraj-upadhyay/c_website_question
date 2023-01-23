// #include<stdio.h>
// int main()
// {
//     int a[5],i;
//     printf("Enter the array element ");
//     for(i=0;i<=4;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<=4;i++)
//     {
//         printf("%d ",a[i]);
//     }

//     return 0;
// }

// Question 1;

// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size of array = ");
//     scanf("%d",&size);
//     int a[size],i;
//     printf("Element of an array\n");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("The Array element are = ");
//     for(i=0;i<size;i++)
//     {
//         {
//             printf("%d ",a[i]);
//         }
//     }

//     return 0;
// }

// Question 2;

// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size of array = ");
//     scanf("%d",&size);
//     int a[size],i;
//     printf("Element of an array\n");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("The negative element of an array  = ");
//     for(i=0;i<size;i++)
//     {
//         if(a[i]<0)
//         {
//             printf("%d ",a[i]);
//         }
//     }

//     return 0;
// }

// Question 3;

// #include<stdio.h>
// int main()
// {
//     int size,sum = 0;
//     printf("Enter the size of array = ");
//     scanf("%d",&size);
//     int a[size],i;
//     printf("Element of an array\n");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("The sum of an  Array element are = ");
//     for(i=0;i<size;i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("%d",sum);

//     return 0;
// }

// Question 4;

// #include<stdio.h>
// int main()
// {
//     int size,max=0,min=0;
//     printf("Enter the size of array = ");
//     scanf("%d",&size);
//     int a[size],i;
//     printf("Element of an array\n");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     max=a[0];
//     min=a[0];
//     for(i=0;i<size;i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//         if(a[i]<min)
//         {
//             min=a[i];
//         }
//     }
//     printf("The maximum element of an array are %d\n = ",max);
//     printf("The minimum element of an array are %d" ,min);
// }

// Question 5;

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int size, max1, max2;
//     printf("Enter the size of array = ");
//     scanf("%d", &size);
//     int a[size], i;
//     printf("Element of an array\n");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     //max1 = max2 = INT_MIN;
//      max1=a[0];
//      max2=a[0];
//     for (i = 0; i < size; i++)
//     {
//         if (a[i] > max1)
//         {
//             max2 = max1;
//             max1 = a[i];
//         }
//         else if(a[i] > max2 && a[i] < max1)
//             max2 = a[i];
//     }
//     printf("Largest number of the array is %d\n", max1);
//     printf("Second Largest number of the array is %d", max2);
// }

// Question 6;

// #include<stdio.h>
// int main()
// {
//     int size,i,odd=0, even=0;
//     printf("Enter the size = ");
//     scanf("%d",&size);
//     int a[size];
//     printf("Enter the array element = ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<size;i++)
//     {
//         if(a[i]%2==0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }
//     printf("Total number of even element is %d\n",even);
//     printf("Total number odd number is %d",odd);

//     return 0;
// }

// Question 7;

// #include<stdio.h>
// int main()
// {
//     int size,i,count=0;
//     printf("Enter the size = ");
//     scanf("%d",&size);
//     int a[size];
//     printf("Enter the array element = ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<size;i++)
//     {
//         if(a[i]<0)
//         {
//             count++;
//         }
//     }
//     printf("Total number of negative element is %d",count);
// }

// Question 8;

// #include<stdio.h>
// int main()
// {
//     int size,i,count=0;
//     printf("Enter the size = ");
//     scanf("%d",&size);
//     int a[size];
//     int b[size];
//     printf("Enter the array element = ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<size;i++)
//     {
//         b[i] = a[i];
//     }
//     printf("The array element is ");
//     for(i=0;i<=size;i++)
//     {
//         printf("%d ",b[i]);
//     }
// }

//   Question 9;

// #include <stdio.h>
// int main()
// {
//     int a[50], size, i, pos, num;
//     printf("Enter the size of array = ");
//     scanf("%d", &size);
//     printf("Enter the array Element = ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the number = ");
//     scanf("%d", &num);
//     printf("Enter the position = ");
//     scanf("%d", &pos);
//     if (pos <= 0 || pos > size + 1)
//     {
//         printf("Invalid position");
//         return 0;
//     }
//     else
//     {
//         for (i = size - 1; i >= pos - 1; i--)
//         {
//             a[i + 1] = a[i];
//         }
//     }
//     a[pos - 1] = num;
//     size++;

//     printf("Array Element are ");
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// Question 10;

// #include <stdio.h>
// int main()
// {
//     int a[50], size, i, pos;
//     printf("Enter the size = ");
//     scanf("%d", &size);
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the position you want to delete = ");
//     scanf("%d", &pos);
//     if (pos <= 0 || pos > size + 1)
//     {
//         printf("Invalid position");
//         return 0;
//     }
//     else
//     {
//         for (i = pos - 1; i < size - 1; i++)
//         {
//             a[i] = a[i + 1];
//         }
//     }
//     size--;
//     printf("Remainaing element are = ");
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

//  Question 11;

// #include <stdio.h>
// int main()
// {
//     int size, i, j, count = 0;
//     printf("Enter the size = ");
//     scanf("%d", &size);
//     int a[size];
//     int freq[size];
//     printf("Enter the array element = ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//         freq[i] = -1;
//     }
//     for (i = 0; i < size; i++)
//     {
//         count = 1;

//         for (j = i + 1; j < size; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 count++;
//                 freq[j] = 0;
//             }
//         }
//         if (freq[i] != 0)
//         {
//             freq[i] = count;
//         }
//     }

//     printf("Frequency of each element of array=\n ");
//     for (i = 0; i < size; i++)
//     {
//         if (freq[i] != 0)
//         {
//             printf("%d occurs %d times\n", a[i], freq[i]);
//         }
//     }
// }

// Question 12;

// #include <stdio.h>
// int main()
// {
//     int size, i, j, count = 0;
//     printf("Enter the size = ");
//     scanf("%d", &size);
//     int a[size];
//     int freq[size];
//     printf("Enter the array element = ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//         freq[i] = -1;
//     }
//     for (i = 0; i < size; i++)
//     {
//         count = 1;

//         for (j = i + 1; j < size; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 count++;
//                 freq[j] = 0;
//             }
//         }
//         if (freq[i]!=0)
//         {
//             freq[i] = count;
//         }
//     }

//     printf("Unique element in the are array=\n ");
//     for (i = 0; i < size; i++)
//     {
//         if (freq[i]== 1)
//         {
//             printf("%d ",a[i]);
//         }
//     }

//     printf("\nDuplicate element in the array are =\n");
//     for (i = 0; i < size; i++)
//     {
//         if (freq[i]> 1)
//         {
//             printf("%d ",a[i]);
//         }
//     }
// }

//  Question  13;

// #include <stdio.h>
// int main()
// {
//   int size, i, j, n, count = 0;
//   printf("Enter the size = ");
//   scanf("%d", &size);
//   int a[size];
//   printf("Enter the number = ");
//   for (i = 0; i < size; i++)
//   {
//     scanf("%d", &a[i]);
//   }
//   for (i = 0; i < size; i++)
//   {
//     for (j = i + 1; j < size; j++)
//     {
//       if (a[i] == a[j])
//       {
//         count++;
//         break;
//       }
//     }
//   }
//   printf("Total duplicate element in the array is %d ", count);

//   return 0;
// }

// Question 14;

// #include <stdio.h>
// int main()
// {
//   int size, i, j,k, count = 0;
//   printf("Enter the size = ");
//   scanf("%d", &size);
//   int a[size];
//   printf("Enter the array element = ");
//   for (i = 0; i < size; i++)
//   {
//     scanf("%d", &a[i]);
//   }
//   for (i = 0; i < size; i++)
//   {
    
//     for (j = i + 1; j < size; j++)
//     {
//       if (a[i] == a[j])
//       {
//         for(k=j;k<size;k++)
//         {
//           a[k]=a[k+1];
//         }
//         size --;
//         j--;
//       }
//     }
//   }
//   printf("Remaning element in the array is = ");
//   for(i=0;i<size;i++)
//   {
//     printf("%d",a[i]);
//   }
//   return 0;
// }

#include<stdio.h>
int main()
{
  int i,size1,size2,merge=0,j=0,temp;
  printf("Enter the size of first array = ");
  scanf("%d",&size1);
  int arr1[size1];
  printf("Enter the first array element = ");
  for(i=0;i<size1;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("Enter the size of second array = ");
  scanf("%d",&size2);
  int arr2[size2];
  printf("Enter the second array = ");
  for(i=0;i<size2;i++)
  {
    scanf("%d",&arr2[i]);
  }

  merge=size1+size2;
  int arr3[merge],k=0;

   // copy the element from arr1 to arr3

  for(i=0;i<size1;i++)
  {
    arr3[j]=arr1[i];
    j++;
  }

  // copy the element from arr2 to arr3

  for(i=0;i<size2;i++)
  {
    arr3[j]=arr2[i];
    j++;
  }

  printf("The merge array element are = ");
  for(i=0;i<merge;i++)
  {
    printf("%d ",arr3[i]);
  }


  for(i=0;i<merge-1;i++)
  {
    for(j=i+1;j<merge;j++)
    {
      if(arr3[j]<arr3[i])
      {
        temp = arr3[i];
        arr3[i]=arr3[j];
        arr3[j]=temp;
      }
    }
  }

  printf("\nArray element are = ");
  for(i=0;i<merge;i++)
  {
    printf("%d ",arr3[i]);
  }



  return 0;
}
