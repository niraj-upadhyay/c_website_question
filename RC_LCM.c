#include<stdio.h>
int lcm(int a, int b)
{
    static int m=0;
    m=m+b;
    if(m%a==0 && m%b==0)
    {
        return m;
    }
    return lcm(a,b);

}


int main()
{
    int a,b,r;
    printf("Enter the number = ");
    scanf("%d",&a);
    printf("Enter the number = ");
    scanf("%d",&b);
    r= lcm(a,b);
    printf("%d",r);

    return 0;
}