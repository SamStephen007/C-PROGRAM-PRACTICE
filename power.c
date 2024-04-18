// program to get the power of the number
#include <stdio.h>
#include <math.h>
int main()
{
    int base,power;
    long long int result;
    printf("Enter the base value :");
    scanf("%d",&base);
    printf("Enter the power value :");
    scanf("%d",&power);
    result =pow(base, power);
    printf("The power value of the given number is : %lld",result);
    return 0;
}