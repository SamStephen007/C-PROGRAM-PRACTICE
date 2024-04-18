#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the number1 & number2:\n");
    scanf("%d %d",num1,num2);
    printf("Add = %d",num1+num2);
    printf("subtract = %d",num1-num2);
    printf("multiply = %d",num1*num2);
    printf("Divide = %0.2f",num1/num2);
    printf("Modulus = %d",num2%num1);  
}