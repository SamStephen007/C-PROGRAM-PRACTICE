//without argument without return value 
#include<stdio.h>
void sum();
int main()
{
    sum();
}
void sum()
{
    int a = 5,b = 7;
    printf("%d",a+b);
}