#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
    struct node*prev;
};
struct node*newnode,*head,*end;
void create(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->link = NULL;
    newnode->prev = NULL;
    if(head==NULL){
        head = newnode;
        end = newnode;
    }
    else{
        end->link = newnode;
        newnode->prev=newnode;
        end = newnode;
    }
}
void delete(){
    struct node* temp = head;
    head = head->link;
    free(temp);
}
void display(){
    struct node*ptr = head;
    while(ptr!=NULL){
        printf("%d\t%d\t%d\n",ptr->prev,ptr->data,ptr->link);
        ptr = ptr->link;
    }
}
int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        create(m);
    }
    display();
    printf("After deletion:\n");
    delete();
    display();
}