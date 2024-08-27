//Character data - Queue

#include <stdio.h>
#define M 100

typedef struct {
    char data[M];
    int front;
    int rear;
}CQUE;

// Initialize the queue
void init(CQUE *q) {
    q->front = -1;
    q->rear = -1;
}

// Add an element to the queue (enqueue)
void enqueue(CQUE *q, char ch) {
    if (q->rear == M - 1) {
        printf("Queue overflow!\n");
        return;
    }

    if (q->front == -1) {
        q->front = 0; // First element to be enqueued
    }

    q->rear++;
    q->data[q->rear] = ch;
    printf("%c enqueued to queue.\n", ch);
}

// Remove an element from the queue (dequeue)
int dequeue(CQUE *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue underflow!\n");
        return -1; // or some error value
    }

    int ch = q->data[q->front];
    printf("%c dequeued from queue.\n", ch);
    q->front++;
    
    // Reset front and rear when the queue is empty
    if (q->front > q->rear) {
        q->front = q->rear = -1;
    }

    return ch;
}

// Display the contents of the queue
void display(CQUE *q) {
	int i;
    if (q->front == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue contents:\n");
    for (i = q->front; i <= q->rear; i++) {
        printf("%c\n", q->data[i]);
    }
}

// Check if the queue is empty
int isEmpty(CQUE *q) {
    if (q->front == -1) {
        printf("Queue is empty.\n");
        return -1;
    }
    printf("Queue is not empty.\n");
    return 0;
}



