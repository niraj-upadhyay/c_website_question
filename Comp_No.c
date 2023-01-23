// Compare the number using function
#include<stdio.h>
int comp(int n1,int n2)
{
    if(n1>n2)
    {
        printf("n1 is greater");
    }
    else
    {
        printf("n2 is greater");
    }

}
int main()
{
    int a,b;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("Enter the second number = ");
    scanf("%d",&b);
    comp(a,b);
    return 0;
}