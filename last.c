//WAP to find the last digit of a number 

// #include<stdio.h>
// int main()
// {
//     int n,lastdigit=0;
//     printf("Enter the number = ");
//     scanf("%d",&n);
//     lastdigit=n%10;
//     printf("%d",lastdigit);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number = ");
//     scanf("%d",&n);
//     while(n>=10)
//     {
//         n=n/10;
//     }
//     printf("The first digit is %d",n);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int first,last=0,sum;
    printf("Enter the number = ");
    scanf("%d",&first);
    last = first%10;
    //printf("last digit is %d\n",last);
    while(first>=10)
    {
        first=first/10;
    }
    printf("First digit is %d\n",first);
    printf("last digit is %d\n",last);
    sum=first+last;
    printf("The sum of first and last is %d\n",sum);
    printf("Swapping the first and last digit are");
    first=first+last;
    last=first-last;
    first=first-last;
    printf("\n after swpping first is %d",first);
    printf("\n after swpping last is %d",last);

    return 0;
}