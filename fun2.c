#include<stdio.h>
int greatestno(int x,int y)
{
    if(x>y)
    {
        printf(" x is greatest Number ");
    }
    else
    {
        printf(" y is greater ");
    }
}

int main()
{
    int a,b;
    printf("Enter the two number = ");
    scanf("%d%d",&a,&b);
    greatestno(a,b);
    
    return 0;
}