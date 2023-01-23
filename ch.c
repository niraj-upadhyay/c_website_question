// WAP to check the Alphabet or not Alphbet

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charcter = ");
    scanf("%c",&ch);
    if((ch>= 'a' && ch<='z') || (ch>='A'&& ch<='Z'))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not alphabet");
    }

    return 0;
}