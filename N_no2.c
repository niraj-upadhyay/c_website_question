//WAP in c to print the natural number till n
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the number range = ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}