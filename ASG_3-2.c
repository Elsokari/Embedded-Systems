#include <stdio.h>

// Function to calculate Fibonacci using recursion
int fibonacciRecursion(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
}

// Function to calculate Fibonacci using iteration
void fibonacciIteration(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Sequence using Iteration: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence using Recursion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciRecursion(i));
    }
    printf("\n");

    fibonacciIteration(n);

    return 0;
}