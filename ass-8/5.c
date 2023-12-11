//Write the Program to find cube of a number using nested macros
#include <stdio.h>

// Define macro to find square and cube

#define CUBE(x) (x * x * x)

int main()
{
    int num;

    // Input a number from user
    printf("Enter any number to find cube: ");
    scanf("%d", &num);

    // Calculate and print cube
    printf("CUBE(%d) = %d\n", num, CUBE(num));

    return 0;
}