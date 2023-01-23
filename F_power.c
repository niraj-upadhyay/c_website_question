// #include<stdio.h>
// int main()
// {
//     int base,expo,i,pow=1;
//     printf("Enter the base = ");
//     scanf("%d",&base);
//     printf("Enter the power = ");
//     scanf("%d",&expo);
//     for(i=1;i<=expo;i++)
//     {
//         pow=pow*base;
//     }
//     printf("%d",pow);
//     return 0;
// }


#include<stdio.h>
int power(int x,int y)
{
  int i,pow=1;
  for(i=1;i<=y;i++)
  {
    pow=pow*x;
  }
  printf("%d",pow);
}


int main()
{
    int expo,base;
    printf("Enter the base = ");
    scanf("%d",&base);
    printf("Enter the power = ");
    scanf("%d",&expo);
    power(base,expo);
    return 0;
}