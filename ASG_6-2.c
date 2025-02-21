#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

int main() {
    Complex c1, c2, result;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    printf("The sum of the complex numbers is: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
