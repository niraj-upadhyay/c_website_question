#include<stdio.h>
int main()
{
    int sp,cp,amount;
    printf("Enter the sp = ");
    scanf("%d",&sp);
    printf("Enter the cp = ");
    scanf("%d",&cp);
    if(sp>cp)
    {
        amount = sp-cp;
        printf("profit = %d\n",amount);
        
    }
    else if(cp>sp)
    {
        amount =cp-sp;
        printf("Loss = %d\n",amount);

    }
    else
    {
        printf("No profit no loss");
    }
    return 0;
}