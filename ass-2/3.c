// Write a program to calculate average of array of n numbers .Pass the array to a 
// function and use pointers
#include <stdio.h>
// Function to calculate the average of an array
double calculateAverage(int *arr, int n)
 {
    int sum = 0;
    // Calculate the sum of array elements
    for (int i = 0; i < n; i++) 
    {
        sum += *(arr + i); // Accessing array elements using pointers
    }
    // Calculate the average
    double average = (double)sum / n;

    return average;
}
int main()
 {
    int n;
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    // Declare an array of size n
    int arr[n];
    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
     {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Calculate average using the function
    double average = calculateAverage(arr, n);
    // Display the result
    printf("Average of the array elements: %.2lf\n", average);

    return 0;
}
