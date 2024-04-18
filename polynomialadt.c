#include<stdio.h>
#include<stdlib.h>
struct node{
    int coff,pow;
    struct node*link;
};
struct node*newnode,*poly,*end;
void create(int a,int b){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->coff = a;
    newnode->pow = b;
    newnode->link = NULL;
    if(poly == NULL){
        poly = newnode;
        end = newnode;
    }else{
        end->link = newnode;
        end = newnode;
    }
}
void display(){
    struct node*ptr=poly;
    while(ptr!=NULL){
        printf("%dx^%d",ptr->coff,ptr->pow);
        ptr = ptr->link;
        if(ptr!=NULL){
            printf("+");
        }
    }
}
int main(){
    int n,m,o;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&m,&o);
        create(m,o);
    }
    display();
}