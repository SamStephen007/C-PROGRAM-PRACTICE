//program to print the even position of the given
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" the element in even position :\n");
    for (i = 0;i<n;i=i+2)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}