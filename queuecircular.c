#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100 // Define your maximum queue size

struct node {
    int data;
    struct node* link;
};

struct node* front = NULL;
struct node* rear = NULL;
struct node* newnode;

void enqueue(int n) {
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->link = NULL;

    if (front == NULL) {
        front = rear = newnode;
    } else {
        rear->link = newnode;
        rear = newnode;
    }
    rear->link = front; // Make the rear node point to front to make it circular
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct node* temp = front;
    if (front == rear) { // If only one element is present
        front = rear = NULL;
    } else {
        front = front->link;
        rear->link = front; // Adjust rear to point to the new front in circular queue
    }
    free(temp);
}

void peek() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("%d %d\n", front->data,front->link);
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct node* ptr = front;
    do {
        printf("%d %d\n", ptr->data,ptr->link);
        ptr = ptr->link;
    } while (ptr != front);
    printf("\n");
}

int main() {
    int n, m, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &m);
        enqueue(m);
    }
    peek();
    dequeue();
    display();
    return 0;
}
