#include<stdio.h>
int main()
{
    int i;
    printf("All the ASCII character from 0 to 255\n");
    for(i=0;i<=255;i++)
    {
        printf("ASCII Value of character is %c = %d\n",i,i);
    }
    return 0;
}