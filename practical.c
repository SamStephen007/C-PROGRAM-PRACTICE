#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    gets(str1);
    //string length
    printf("length = %d",strlen(str1));
    //sstring copy
    strcpy(str2,str1);
    printf("copy = %s",str2);
    //string compare
    gets(str2);
    strcmp(str1,str2);
    if(str1==str2){
        printf("String1 is equal to string2");
    }
    else if(str1<str2){
        printf("String1 is less than string2");
    }
    else{
        printf("string1 is greater than string2");
    }
    return 0;
}