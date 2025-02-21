#ifndef STACK_H
#define STACK_H

#define MAX 100 // Maximum size of the stack

typedef struct {
    int items[MAX];
    int top;
} Stack;

void initialize(Stack* s);
int isEmpty(Stack* s);
int isFull(Stack* s);
void push(Stack* s, int item);
int pop(Stack* s);
int top(Stack* s);

#endif // STACK_H