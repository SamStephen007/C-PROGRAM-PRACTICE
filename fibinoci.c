//fibinoci series 
#include<stdio.h>
int main(){
    int fib1 = 0,fib2 = 1,fib3,i,num;
    printf("Enter the number")
    printf("%d\n",fib1);
    printf("%d\n",fib2);
    for(i=0;i<num;i++){
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        printf("%d\n",fib3);
    }
}