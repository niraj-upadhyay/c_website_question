//WAP in c to print the natural number(in reverse) till n
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}