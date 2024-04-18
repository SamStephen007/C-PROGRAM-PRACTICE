//To calculate the length of the string
#include<stdio.h>
int main()
{
    int i,count = 0;
    char s1[10];
    gets(s1);
    for(i =0;s1[i]!='\0';i++)
    {
        count = count + 1;
    }
    printf("%d",count);
    return 0;
}