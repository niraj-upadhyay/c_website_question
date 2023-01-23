#include<stdio.h>
#include<windows.h>
int main()
{
    system("color 7d");
    int n,i;
    printf("Enter the table name = ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}