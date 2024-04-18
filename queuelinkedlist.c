#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct queue{
    struct node*front;
    struct node*rear;
};
struct queue*create(){
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    q->rear=q->front = NULL;
    return q;
}
int isempty(struct queue*q){
    return (q->front==NULL);
}
int enqueue(struct queue*q,int value){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(isempty(q)){
        q->front=q->rear=newnode;
    }else{
        q->rear->next = newnode;
        q->rear = newnode;
    }
    printf("Inserted queue:",value);
}
int  dequeue(struct queue*q){
    if(isempty(q)){
        printf("queue is empty");
    }else{
         struct node*temp=q->front;
        q->front = q->front->next;
        free(temp);
    }
}
int  peek(struct queue*q){
    if(isempty(q)){
        printf("queue is empty");
    }else{
        return(q->front->data);
    }
}
/*int display(struct queue*q){
    q->front = ptr;
    while(ptr!=NULL){
        printf("%d %d",ptr->data,ptr->next);
    }
}*/
int main(){
    struct queue*q=create();
    enqueue(q,17);
    enqueue(q,12);
    enqueue(q,7);
    printf("%d",dequeue(q));
    printf("%d",peek(q));
    
}