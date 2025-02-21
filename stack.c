#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

// Function to initialize the stack
void initialize(Stack* s) {
    s->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Function to check if the stack is full
int isFull(Stack* s) {
    return s->top == MAX - 1;
}

// Function to push an item onto the stack
void push(Stack* s, int item) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push %d\n", item);
        return;
    }
    s->items[++(s->top)] = item;
}

// Function to pop an item from the stack
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop\n");
        return -1; // Return an invalid value to indicate error
    }
    return s->items[(s->top)--];
}

// Function to get the top item of the stack without popping it
int top(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty. No top element\n");
        return -1; // Return an invalid value to indicate error
    }
    return s->items[s->top];
}