#include <stdio.h>
int main()
{
    int f;
    int celsius;
    printf("Enter the value of faherheit:");
    scanf("%d",&f);
    celsius = (f - 32)*5/9;
    printf("%d",celsius);
    return 0; 
}