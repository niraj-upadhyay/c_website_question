// WAP to check alphabet or cosonent
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character = ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A'&& ch<='Z'))
    {
        printf("Alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
    return 0;
}