#include <stdio.h>

// Function to increment the value of x by 1
void edit(int *x) {
    *x = *x + 1;
}

int main() {
    int x;
    int values[3] = {5, 20, 80};

    // Asking the user to enter a value for x
    printf("Enter a value for x: ");
    scanf("%d", &x);

    // Printing the value of x before calling edit
    printf("Value of x before calling edit: %d\n", x);

    // Calling the edit function
    edit(&x);

    // Printing the value of x after calling edit
    printf("Value of x after calling edit: %d\n", x);

    // Printing the stored values
    printf("Stored values: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}