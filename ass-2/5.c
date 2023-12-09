//Write a program to read 1 D array of “n” elements and print the inputted array 
// element (using dynamic memory allocation)

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n;
    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL)
     {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with an error code
    }
    // Read elements of the array from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the inputted array elements
    printf("\nInputted array elements are: ");
    for (int i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }
    // Free the dynamically allocated memory
    free(arr);

    return 0; // Exit successfully
}
