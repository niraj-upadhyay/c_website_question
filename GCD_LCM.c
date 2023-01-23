#include<stdio.h>
int main()
{
    int n1,n2,y1,y2,GCD,LCM;
    printf("Enter the first  number = ");
    scanf("%d",&n1);
    printf("Enter the second number = ");
    scanf("%d",&n2);
    y1=n1;
    y2=n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            if(n2>n1)
            {
                n2=n2-n1;
            }
        }
    }
    printf("GCD of two number is %d\n",n1);
    GCD=n1;
    LCM=(y1*y2)/GCD;
    printf("LCM of two number is %d",LCM);
    return 0;
}