#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the two  number = ");
    scanf("%d%d",&n1,&n2);
    switch(n1>n2)
    {
        case 0:
        {
            printf("%d is maximum",n2);
            break;
        }
        case 1:
        {
            printf("%d is maximum",n1);
            break;
        }
    }
    return 0;
}