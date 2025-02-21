#include <stdio.h>

// Function to swap the two numbers
void swap(int *x, int *y) {
    printf("Before swapping: x = %d, y = %d\n", *x, *y);
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    printf("After swapping: x = %d, y = %d\n", *x, *y);
}

int main() {
    int num1, num2;

    // Asking the user to enter two numbers
    printf("Enter two numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);

    // Calling the swap function
    swap(&num1, &num2);

    return 0;
}