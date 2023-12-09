// Write a program to accept a 2D array and print the addition of all elements (allocate 
//memory at run time)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Dynamically allocate memory for the 2D array
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) 
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         {
            scanf("%d", &arr[i][j]);
        }
    }
    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++) 
        {
            sum += arr[i][j];
        }
    }
    // Print the sum of all elements
    printf("Sum of all elements: %d\n", sum);
    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) 
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
