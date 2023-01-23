#include<stdio.h>
int main()
{
    int m,p,b,c,chm,sum;
    float perc;
    printf("Enter the marks of math = ");
    scanf("%d",&m);
    printf("Enter the marks of physics = ");
    scanf("%d",&p);
    printf("Enter the marks of biology = ");
    scanf("%d",&b);
    printf("Enter the marks of computer = ");
    scanf("%d",&c);
    printf("Enter the marks of chemistry = ");
    scanf("%d",&chm);
    sum=m+p+c+b+chm;
    printf("%d\n",sum);
    //perc=sum/500*100;
    perc=sum/5;
    printf("%.2f\n",perc);
    if(perc>=90 && perc<=100)
    {
        printf("A Grade");
    }
    else if(perc>=80 && perc<90)
    {
        printf("B Grade");
    }
    else if(perc>=70 && perc<80)
    {
        printf("C grade");
    }
    else if(perc>=60 && perc<70)
    {
        printf("D grade");
    }
    else if(perc>=50 && perc<60)
    {
        printf("E grade");
    }
    else if(perc>=40)
    {
        printf("F Grade");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}