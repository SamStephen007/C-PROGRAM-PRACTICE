//program for with argument and with return value
#include<stdio.h>
int sum(int,int);
int main()
{
    int s = 10,r = 20;
    {
        int result = sum(s,r);
        printf("%d",result);
    }
}
int sum(int a,int b)
{
    return a+b;
}