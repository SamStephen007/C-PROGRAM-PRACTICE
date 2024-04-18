//Program to determine the number is +ve or -ve
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if (num < 0)
    {
        printf("It is negative");
    }
    else if(num == 0)
    {
        printf("It is zero");
    }
    else
    {
        printf("It is positive");
    }
    return 0;
}