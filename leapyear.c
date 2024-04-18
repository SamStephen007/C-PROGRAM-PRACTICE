//program tofind whether the year is leap year or not
#include <stdio.h>
int  main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&myear);
    if (year%4==0)
    {
        printf("This is a leap year");
    } 
    else
    printf("\n This is not a leap year")
    return 0;
}
