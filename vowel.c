// WAP to check alphabet or cosonent
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character = ");
    scanf("%c",&ch);
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
    {
        printf("Vowel");
    }
    else if((ch>='a' && ch<='z')||(ch>='A'&& ch<='z'))
    {
        printf("Consonent");
    }
    else
    {
        printf("Not alphabet");
    }
    return 0;
}