//program to check whether the number is alphabet,digit,special charaters
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%s",&ch);
    if (ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z')
    {
        printf("It is alphabets");
    }
    else if (ch>='0'&&ch<='9')
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is a special character")
    }
}