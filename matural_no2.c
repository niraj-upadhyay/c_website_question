// Wap in c to print the range of natural no till n

#include<stdio.h>
int main()
{
    int start,end,i;
    printf("Enter the starting number = ");
    scanf("%d",&start);
    printf("Enter the ending number = ");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}