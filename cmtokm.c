//program to convert centimeter to meter and kilometer
#include <stdio.h>
int main()
{
    float centimeter,kilometer,meter;
    printf("Enter the value of centimeter :");
    scanf("%f",&centimeter);
    meter = centimeter/100;
    kilometer = centimeter/1000;
    printf("The return value centimeter to meter is :%0.02f\n",meter);
    printf("The return value of centimeter to kilometer is :%0.02f\n",kilometer);
    return 0;
}