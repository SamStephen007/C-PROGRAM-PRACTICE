// program for left shift and right shift
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the value to left shift with 4 shifts and 3 shifts:");
    scanf("%d",&num);
    num <<=4;
    printf("The left shift with 4 shifts of the given number is %d\n",num);
    num <<=3;
    printf("The left shift with 3 shifts of the given number is %d\n",num);
    return 0;

}