//with argument without return value
#include<stdio.h>
void sum(int,int);
int main()
{
    int a = 10,b = 20;
    sum(a,b);

}
void sum(int a,int b)
{
    printf("%d",a+b);
}