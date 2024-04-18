#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*newnode,*head,*end;
void create(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->link = NULL;
    if(head==NULL){
        head = newnode;
        end = newnode;
    }else{
        end->link = newnode;
        end = newnode;
        end->link = head;
    }
}
void insert(struct node**head,int x){
    struct node*temp;
    int position;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Unable to allocate memory");
    }else{
        newnode->data = x;
        newnode->link = NULL;
        temp = (*head);
        printf("Enter the position:");
        scanf("%d",&position);
        for(int i=0;i<position;i++){
        temp = temp->link;
        if(temp == NULL)
        break;
        }
    }
    if(temp!=NULL){
        newnode->link = temp->link;
        temp->link = newnode;
        printf("NODE INSERTED AT THE MIDDLE SUCCESSFULLY\n");
    }else{
        printf("UNABLE TO INSERT THE DATA AT THE GIVEN POSITION\n");
    }
}
void display(){
    struct node*ptr;
    ptr = head;
    do{
        printf("%d %d\n",ptr->data,ptr->link);
        ptr = ptr->link;
    }while(ptr!=head);
}
int main(){
    int n,m,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        create(m);
    }
    display();
    scanf("%d",&x);
    insert(&head,x);
    display();
}