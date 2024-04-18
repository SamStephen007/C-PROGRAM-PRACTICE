#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*ptr;
    ptr = fopen("E:/file.txt","W");
    if(ptr = NULL){
        printf("FILE NOT OPENED");
    }else{
        printf("FILE CREATED SUCCESSFULLY");
    }
    return 0;
}