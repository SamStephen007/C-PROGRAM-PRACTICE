//program for linear search
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int a[n],x,i;
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag = 0;
    printf("Enter the element to check:");
    scanf("%d",&x);
    for(i = 0;i<n;i++)
    {
        if(a[i] == x)
        {
        flag = 1;
        break;
        }
    }
    if(flag == 1)
    {
        printf("Element is present in the %d position",i+1);
    }
    else{
        printf("NOT PRESENT");
    }
}