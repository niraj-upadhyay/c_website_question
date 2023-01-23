#include<stdio.h>
int main()
{
    int n,i,space,j;
    printf("Enter the rows = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(i==n||j==(2*i-1))
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}