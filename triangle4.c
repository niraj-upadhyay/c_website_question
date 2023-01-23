#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the first side = ");
    scanf("%d",&s1);
     printf("Enter the first side = ");
    scanf("%d",&s2);
     printf("Enter the first side = ");
    scanf("%d",&s3);
    if(s1==s2 && s2==s3 && s3==s1)
    {
        printf("Equlateral triangle");
    }
    else if (s1==s2 || s2==s3 || s3==s1)
    {
        printf("Isoceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }


    return 0;
}