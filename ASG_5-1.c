#include <stdio.h>

int main() {
    int arr_1[5];
    int i, max, min, max_pos, min_pos, temp;

    // Asking the user to enter 5 numbers
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr_1[i]);
    }

    // Printing the 5 elements of arr_1
    printf("The 5 elements of arr_1 are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    // Finding the maximum and minimum numbers and their positions
    max = min = arr_1[0];
    max_pos = min_pos = 0;
    for (i = 1; i < 5; i++) {
        if (arr_1[i] > max) {
            max = arr_1[i];
            max_pos = i;
        }
        if (arr_1[i] < min) {
            min = arr_1[i];
            min_pos = i;
        }
    }

    printf("The maximum number is %d at position %d\n", max, max_pos);
    printf("The minimum number is %d at position %d\n", min, min_pos);

    // Sorting the array in ascending order
    for (i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr_1[i] > arr_1[j]) {
                temp = arr_1[i];
                arr_1[i] = arr_1[j];
                arr_1[j] = temp;
            }
        }
    }

    // Printing the array
    printf("The sorted array in ascending order is: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    return 0;
}