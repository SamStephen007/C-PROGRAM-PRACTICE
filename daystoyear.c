#include <stdio.h>
int main()
{
    float days;
    float years;
    printf("Enter the days:");
    scanf("%f",&days);
    years = days/365;
    printf("%f",years);
   return 0;
}