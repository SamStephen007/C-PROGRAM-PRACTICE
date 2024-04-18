//greatest among 3 numbers
#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the 1st number :");
    scanf("%d",&num1);
    printf("Enter the 2nd number:");
    scanf("%d",&num2);
    printf("Enter the 3rd number:");
    scanf("%d",&num3);
    if (num1 > num2)
    {
        if (num2>num3)
        {
            printf("num1 is greater");
        }
    }
    else if (num2<num3)
    {
        if (num1<num2)
        {
            printf("num3 is greatest");
        }
    }
    else
    {
        printf("num2 is greatest");
    }
}