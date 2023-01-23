// Wap to print range of even natural number 

#include<stdio.h>
int main()
{
    int start,end,i;
    printf("Enter the starting number = ");
    scanf("%d",&start);
    printf("Enter the end number = ");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    

    return 0;
}