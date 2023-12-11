//) Write the Program to
//a. find minimum of three numbers using nested macros
//b. swap two number
#include <stdio.h>

// Macro to find the minimum of three numbers
#define MINIMUM(x, y, z) ((x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z))

// Macro to swap two numbers using XOR bitwise operation
#define SWAP(x, y) do { (x) ^= (y); (y) ^= (x); (x) ^= (y); } while (0)

int main() {
    // Part a: Find minimum of three numbers using nested macros
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int minimum = MINIMUM(num1, num2, num3);

    printf("Minimum of %d, %d, and %d is: %d\n\n", num1, num2, num3, minimum);

    // Part b: Swap two numbers using macros
    int a, b;

    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    SWAP(a, b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
