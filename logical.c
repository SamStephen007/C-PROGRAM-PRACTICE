#include <stdio.h>
int main()
{
    int num1=5,num2=10,ret;
    ret = ((num1 <= num2)||(num1 != num2));
    printf("return value is%d\n",ret);
    ret = ((num1 < num2)&&(num1 == num2));
    printf("return value is%d\n",ret);
    ret = !((num1 = num2)&&(num1 >=num2));
    printf("return value is%d\n",ret);
    return 0 ;

}