// WAP to count the number of digit

#include<stdio.h>
int main()
{
    int a,count=0,n=0;
    printf("Enter the number = ");
    scanf("%d",&a);
    while(a>0)
    {
        count ++;
        n=count;
        a=a/10;
    }
    printf("Total number of digit is %d",n);

    return 0;
}