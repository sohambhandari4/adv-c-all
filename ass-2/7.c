//) Write a program to find sum and average of n elements entered by user. To perform 
// this, allocate memory dynamically using calloc() function.
#include <stdio.h>
#include <stdlib.h>
int main()
 {
    int n;
    int *numbers;
    int sum = 0;
    float average;
    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Check if the user entered a valid number of elements
    if (n <= 0) 
    {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1;
    }
    // Dynamically allocate memory for the array using calloc
    numbers = (int *)calloc(n, sizeof(int));

    if (numbers == NULL)
     {
        printf("Memory allocation failed.\n");
        return 1;
    }
    // Read the elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    // Calculate the average
    average = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    // Free the dynamically allocated memory
    free(numbers);
    return 0;
}
