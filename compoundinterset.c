#include <stdio.h>
int main()
{
    float a;
    float p;
    float CI;
    printf("Enter the final amount: ");
    scanf("%f",&a);
    printf("Enter the intial amount:");
    scanf("%f",&p);
    CI = a - p;
    printf("%f",CI);
    return 0;
}