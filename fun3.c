#include<stdio.h>
int checkno(int q)
{
    if(q%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("odd number");
    }
}
int main()
{
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    checkno(a);
    return 0;
}