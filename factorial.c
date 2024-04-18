//program for calculate factorial of any number
#include <stdio.h>
int main()
{
    int i,num,fact=1;
    printf("Enter the number:");
    scanf("%d",&num);
    for (i=num;i>0;i=i-1)
    {
        fact = fact*i;
    }
    printf("The factorial of the given number is :%d",fact);
    return 0;
}