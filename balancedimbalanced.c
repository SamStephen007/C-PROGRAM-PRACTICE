#include<stdio.h>
#include<string.h>
#define size 10
int stack[size];
int  top = -1;
void push(char a){
    if(top==size-1){
        printf("STACK IS FULL");
    }
    else{
        top=top+1;
        stack[top]=a;
    }
}
char pop(){
    return stack[top--];
}
int match(char a,char b){
    if(a=='['&& b==']')
        return 1;
    if(a=='{'&& b=='}')
        return 1;
    if(a=='('&& b==')')
        return 1;
    return 0;
}
int check(char exp[]){
    for(int i=0;i<strlen(exp);i++){
        if(exp[i] =='{'||exp[i] =='['||exp[i] =='('){
            push(exp[i]);
        }
        if(exp[i] =='}'||exp[i] ==']'||exp[i] ==')'){
            if(top==-1){
                printf("Right paranthesis >left paranthesis");
                return 0;
            }else{
                int temp=pop();
                if(!match(temp,exp[i])){
                    printf("MSMATCH PARANTHESIS");
                    return 0;
                }
            }
    }
}
    if(top==-1){
        return 1;
    }
}
int main(){
    int valid;
    char exp[size];
    gets(exp);
    valid=check(exp);
    if(valid==1){
        printf("expressio is balanced");
    }else{
        printf("expression imbalanced");
    }
}