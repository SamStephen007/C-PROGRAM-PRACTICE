#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*newnode,*head,*end;
void create(int n)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->link = NULL;
    if(head==NULL){
        head = newnode;
        end = newnode;
    }
}