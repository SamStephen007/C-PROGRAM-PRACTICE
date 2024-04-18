//progran for odd or even from a range
#include <stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter the starting range :");
    scanf("%d",&num1);
    printf("Enter the ending range :");
    scanf("%d",&num2);
    for (i=num1;i<=num2;i++)
    {
        if(i%2==0)
        {
            printf("%d - EVEN\n",i);
        }
        else
        {
            printf("%d - ODD\n",i);
        }
    }
    return 0;
}