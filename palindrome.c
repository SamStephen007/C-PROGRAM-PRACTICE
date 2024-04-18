//program to check whether the given number is palindrome or not
#include <stdio.h>
int main()
{
    int num,rev = 0,num1;
    printf("Enter the number:");
    scanf("%d",&num);
    num1 = num;
    while (num>0)
        {
            rev = rev*10+(num%10);
            num = num /10; 
        }
    if (num1 == rev)
        {
            printf("IT IS PALINDROME");
        }
    else
        {
            printf("IT'S NOT A PALINDROME");
        }
        return 0;
}