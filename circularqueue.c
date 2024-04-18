#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5

struct CircularQueue {
    int items[MAX_SIZE];
    int front, rear;
};

void initializeQueue(struct CircularQueue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isFull(struct CircularQueue *queue) {
    if ((queue->front == 0 && queue->rear == MAX_SIZE - 1) || (queue->front == queue->rear + 1))
        return 1;
    return 0;
}

int isEmpty(struct CircularQueue *queue) {
    if (queue->front == -1)
        return 1;
    return 0;
}

void enqueue(struct CircularQueue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full\n");
    } else {
        if (queue->front == -1)
            queue->front = 0;
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->items[queue->rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

int dequeue(struct CircularQueue *queue) {
    int item;
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    } else {
       item = queue->items[queue->front];
        if (queue->front == queue->rear) {
            queue->front = -1;
            queue->rear = -1;
        } else {
            queue->front = (queue->front + 1) % MAX_SIZE;
        }
        return item;
    }
}

void display(struct CircularQueue *queue) {
    int i;
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (i = queue->front; i != queue->rear; i = (i + 1) % MAX_SIZE)
            printf("%d ", queue->items[i]);
        printf("%d\n", queue->items[i]);
    }
}

int main() {
    struct CircularQueue queue;
    initializeQueue(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);
    enqueue(&queue, 5);

    display(&queue);

    dequeue(&queue);
    dequeue(&queue);

    display(&queue);

    enqueue(&queue, 6);

    display(&queue);

    return 0;
}
