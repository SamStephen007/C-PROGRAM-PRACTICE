#include<stdio.h>
int main()
{
    int num1 =  10 ,num2 = 5;
    printf("The value of num1 + num2 = %d\n",num1 += num2);
    printf("The value of num1 - num2 = %d\n",num1 -= num2);
    printf("The value of num1 * num2 = %d\n",num1 *= num2);
    printf("The value of num1 / num2 = %d\n",num1 /= num2);
    printf("The value of num1 %% num2 = %d\n",num1 %= num2);
    return 0;
}