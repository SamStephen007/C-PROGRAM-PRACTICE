#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*newnode,*front,*rear;
void enqueue(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data =  n;
    newnode->link = NULL;
    if(front == NULL){
        front=rear=newnode;
    }
    else{
        rear->link = newnode;
        rear = rear->link;
    }
}
void dequeue(){
    struct node*temp;
    if(front==NULL){
        printf("Stck is underflow");
    }else{
         temp = front;
        front = front->link;
        free(temp);
    }
}
void peek(){
    printf("%d\t%d",front->data,front->link);
}
void display(){
    struct node*ptr = front;
    while(ptr!=NULL){
        printf("%d  %d\n",ptr->data,ptr->link);
        ptr=  ptr->link;
    }
}
int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        enqueue(m);
    }
    peek();
    //dequeue();
    display();
}