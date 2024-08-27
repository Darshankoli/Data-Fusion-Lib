#include<stdio.h>
#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} ISTK;

void init(ISTK *p) {
    p->top = -1;
}

void push(ISTK *t, int value) {
	
    if (t->top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        return;
    }
    
    t->top++;
	t->data[t->top] = value;
    printf("%d pushed to stack.\n", value);
}

int pop(ISTK *p) {
    if (p->top == -1) {
        printf("Stack underflow!\n");
        return -1; // or some error value
    }
    int value = p->data[(p->top)--];
    printf("%d popped from stack.\n", value);
    return value;
}

void display(ISTK *p) {
	int i;
	
    if (p->top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack contents:\n");
    for (i = p->top; i >= 0; i--) {
        printf("%d\n", p->data[i]);
    }
}

int isEmpty(ISTK *p) {
    if (p->top == -1) {
        printf("Stack is empty.\n");
        return -1;
    }
    printf("Stack is not empty.\n");
    return 0;
}














