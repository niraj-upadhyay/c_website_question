#include<stdio.h>
int main()
{
    int rows,i,j,space;
    printf("Enter the rows = ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<i;space++)
        {
            printf(" ");
        }
        for(j=i;j<=rows;j++)
        {
            printf("*");
        }
        printf("\n");
        




    }
    return 0;
}