#include<stdio.h>
int main()
{
    char ch;
    int i;
    printf("Enter the capital letter = ");
    scanf("%c",&ch);
    printf("Alphbet from A to Z");
    for(i=65;i<=90;i++)
    {
        printf("%c\n",i);
    }
    return 0;
}