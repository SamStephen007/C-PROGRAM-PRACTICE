#include<stdio.h>
int fib(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num == 1)
    {
        return 1;
    }
    else
    {
        return fib(num-1) + fib(num-2);
    }
}
int main()
{
    int a;
    printf("Enter the number of element to be in series:\n");
    scanf("%d",& a);
    for(int i=0;i<a;i++)
    {
        printf("%d",fib(i));
    }
    return 0;

}
