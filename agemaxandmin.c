//program for find the youngst and the eldest
#include<stdio.h>
int main()
{
    int i ,n, max,min;
    printf("Enter the number of people:");
    scanf("%d",&n);
    int age[n];
    printf("Enter the ages:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&age[i]);
    }
    min  = age[0];
    max = age[0];
    for (i=1;i<n;i++)
    {
        if(age[i]>max)
        {
            max = age[i];
        }
        if(age[i]<min)
        {
            min = age[i];
        }
    }
    printf("The youngest person in the list is %d\n",min);
    printf("The eldest person in the list is %d\n",max);
    return 0;
}