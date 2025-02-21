#include "Stack.h"
#include <stdio.h>

int main() {
    Stack s;
    initialize(&s);

    // Push items onto the stack
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    // Print the top item
    printf("Top item: %d\n", top(&s));

    // Pop items from the stack
    printf("Popped item: %d\n", pop(&s));
    printf("Popped item: %d\n", pop(&s));

    // Check if the stack is empty
    if (isEmpty(&s)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    // Push another item
    push(&s, 40);

    // Print the top item
    printf("Top item: %d\n", top(&s));

    return 0;
}