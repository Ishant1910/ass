// calculator.c
#include <stdio.h>
#include <math.h> // thsi are the header files

int main() {
    int a = 2, b = 3;
    printf("Addition: %d\n", a + b);// a+b
    printf("Exponent: %.0f\n", pow(a, b));  // 2^3 = 8

        // Hexadecimal display
    printf("Value of a in hex: %X\n", a);      // Hex of 2 = 2
    printf("Value of b in hex: %X\n", b);      // Hex of 3 = 3
    printf("Addition in hex: %X\n", a + b);    // Hex of 5 = 5

    return 0;
}  