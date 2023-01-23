// #include <stdio.h>
// int main()
// {
//     int n, r, sum = 0, x, i,a,p;
//     printf("Enter the number = ");
//     scanf("%d", &n);
//     for (i = 1; i <=n; i++)
//     {
//         a=i,p=i;
//         sum=0;
//         while (a > 0)
//         {
//             r = a % 10;
//             sum = sum * 10 + r;
//             a = a / 10;
//         }
//         if (sum == p)
//         {
//             printf("%d ", p);
//         }
//     }
//     return 0;
// }





#include <stdio.h>

int palindromeno(int n)
{
    int a;
    static int sum=0;
    
    if(n>0)
    {
        a=n%10;
        sum=sum*10+a;
        return palindromeno(n/10);
    }
    return (sum);

}
    
int main()
{
    int n, r, p;
    printf("Enter the number = ");
    scanf("%d", &n);
    p = n;
    r = palindromeno(n);
    if (n == r)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not palindrome number");
    }

    return 0;
}














// #include <stdio.h>

// int reverse(int);

// int main()
// {

//     int numbr, sum;

//     printf("Enter a number: ");

//     scanf("%d", &numbr);

//     sum = reverse(numbr);

//     if (numbr == sum)

//         printf("The given number  %d is a palindrome", numbr);

//     else

//         printf("The given number  %d is not a palindrome", numbr);

//     return 0;
// }

// int reverse(int num)
// {

//     int rem;

//     static int sum = 0;

//     if (num != 0)
//     {

//         rem = num % 10;

//         sum = sum * 10 + rem;

//         reverse(num / 10);
//     }

//     return (sum);
// }