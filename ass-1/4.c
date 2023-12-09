//Write a program to calculate average marks of “n” number of students using 
// pointers and array

#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    int marks[n];
    int *ptr = marks; // Pointer to the array

    // Input marks for each student
    printf("Enter the marks for each student:\n");
    for (i = 0; i < n; i++)
     {
        printf("Student %d: ", i + 1);
        scanf("%d", ptr);
        ptr++; // Move the pointer to the next element
    }
    // Calculate the total marks
    int total = 0;
    ptr = marks; // Reset the pointer to the beginning of the array
    for (i = 0; i < n; i++) 
    {
        total += *ptr;
        ptr++; // Move the pointer to the next element
    }
    // Calculate and print the average
    double average = (double)total / n;
    printf("Average marks: %.2lf\n", average);
    
    return 0;
}