#include <stdio.h>
int main()
{
    const float pi = 3.14;
    float radius;
    float result;
    printf("Enter the radius :");
    scanf("%f",&radius);
    result = 2*pi*radius;
    printf("%f",result);
    return 0;

}