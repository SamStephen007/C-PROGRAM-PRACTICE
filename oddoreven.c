//program to determine whether the number is odd or even
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("It is even");
    }
    else
        {
            printf("It is odd");
        }
    return 0;
}