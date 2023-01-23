#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the letter = ");
    scanf("%c",&ch);
    printf("Alphbet from a to z");
    for(ch='a';ch<='z';ch++)
    {
        printf("%c\n",ch);
    }
    return 0;
}
