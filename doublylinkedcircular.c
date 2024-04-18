#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*link;
};
struct node*newnode,*head,*end;
void create(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->prev = NULL;
    newnode->link = NULL;
    if(head==NULL){
        head = newnode;
        end = newnode;
    }else{
        end->link = newnode;
        newnode->prev = end;
        end = newnode;
        head->prev =  end;
        end->link = head;
    }
}
void display(){
    struct node*ptr = head;
    do
    {
        printf("%d %d %d\n",ptr->prev,ptr->data,ptr->link);
        ptr = ptr->link;
    } while (ptr!=head);
}
int main(){
    int n,m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&n);
        create(n);
    }
    display();
}