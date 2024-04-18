//program for multiplication table
#include<stdio.h>
int main()
{
    int num,i,mult;
    printf("Enter the number:");
    scanf("%d",&num);
    for (i=1;i<=10;i = i+1)
    {
        mult = num*i;
        printf("%d*%d=%d\n",i,num,mult);
    }
    return 0;
}