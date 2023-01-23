//WAP in c to print the natural number till n

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("The natural number is%d\n",i);
    }
    return 0;
}