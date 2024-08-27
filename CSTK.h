#include <stdio.h>
#define M 50

typedef struct charstack {
    int top;
    char arr[M];
} CSTK;

// Initialize the stack
void init(CSTK *t) {
    t->top = -1;
}

// Push a character onto the stack
void push(CSTK *t, char ch) {
    if (t->top == M - 1) {
        printf("\nStack is full, cannot push %c.", ch);
        return;
    }
    t->top++;
    t->arr[t->top] = ch;
    printf("\nPush %c into stack.", ch);
}

// Check if the stack is empty
int isEmpty(CSTK *t) {
    return (t->top == -1);
}

// Pop a character from the stack
char pop(CSTK *t) {
    if (isEmpty(t)) {
        printf("\nStack is empty, cannot pop.");
        return '\0'; // Returning null character if stack is empty
    }
    printf("\nPop %c from stack.", t->arr[t->top]);
    return t->arr[t->top--];
}

// Display the stack
void display(CSTK *t) {
    if (t->top == -1) {
        printf("\nStack is empty.");
        return;
    }
    if (t->top == M - 1) {
        printf("\nStack is full.");
    }

    int i;
    printf("\nStack Data: ");
    for (i = 0; i <= t->top; i++) {
        printf("%4c", t->arr[i]);
    }
}
