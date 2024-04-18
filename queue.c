#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*newnode,*front,*rear;
void enqueue(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->link = NULL;
    if(front == NULL){
        front = newnode;
        rear = newnode;
    }else{
        rear->link = newnode;
        rear = newnode;
    }
}
void dequeue(){
    struct node*temp;
    if(front == NULL){
        printf("Queue is underflow");
    }else{
        temp = front;
        front = front->link;
        free(temp);
    }
}
void peek(){
    printf("%d %d\n",front->data,front->link);
}
void display(){
    struct node*ptr = front;
    while(ptr!=NULL){
        printf("%d %d\n",ptr->data,ptr->link);
        ptr = ptr->link;
    }
}
int main(){
    int i,m,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        enqueue(m);
    }
    display();
    printf("dequeue\n");
    dequeue();
    display();
    printf("peek\n");
    peek();
    printf("display\n");
    display();
}