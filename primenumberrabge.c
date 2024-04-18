//program for print a prime number in a given range
#include<stdio.h>
int main()
{
    int start,end,i,j;
    printf("Enter the starting range:");
    scanf("%d",&start);
    printf("Enter the ending range:");
    scanf("%d",&end);
    for (i = start;i<=end;i++)
    {
        for (j=2;j<=i;j++)
        {
            if (i%j==0)
            break;
        }
        if(i==j)
        printf("%d\n",i);
    }
    return 0;
}