//without argument with return value
#include<stdio.h>
int sum();
int main()
{
    int result = sum();
    printf("%d",result);
}
int sum()
{
    int a = 4,b = 3;
    return a +b;
}