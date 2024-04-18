//Program to find the area of the rectangle
#include <stdio.h>
int main()
{
    float area,length,width;
    printf("Enter the length of the rectangle :");
    scanf("%f",&length);
    printf("Enterr tthe width of the rectangle :");
    scanf("%f",&width);
    area = length * width;
    printf("The area of the rectangle is %0.02f",area);
    return 0;
}