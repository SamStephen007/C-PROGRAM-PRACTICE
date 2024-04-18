//program to find the maximum and minimum value in the array
#include <stdio.h>
int main()
{
    int temp,max,min,num[5],i;
    printf("Enter the array:\n");
    for (i=1;i<=5;i++)
    {
        scanf("%d",&num[5]);
        if (num[0]>num[i])
            {
                temp = num[0];
                num[0]=num[i];
            }
            printf("the minimum number is %d\n",&num[0]);
    }
    return 0;

}