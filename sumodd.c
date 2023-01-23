#include<stdio.h>
int sumodd(int a, int b)
{
    if(a>b)
    {
        return 0;
    }
    else
    {
        return a + sumodd(a+2,b);
    }

}




int main()
{
    int x,y,r;
    printf("Enter the lower limit = ");
    scanf("%d",&x);
    printf("Enter the upper limit = ");
    scanf("%d",&y);
    r = sumodd(x,y);
    printf("%d",r);

    return 0;
}