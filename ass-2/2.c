//Write a Program to accept an array and print the same using double pointer

#include <stdio.h>
#define SIZE 5 // size of the array

int main()
{
    int arr[SIZE]; // declare an array of integers
    int *ptr; // declare a pointer to an integer
    int **dptr; // declare a double pointer to an integer
    int i; // declare a loop variable

    printf("Enter %d elements of the array:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]); // read an element from the user
    }

    ptr = arr; // assign the address of the first element of the array to the pointer
    dptr = &ptr; // assign the address of the pointer to the double pointer

    printf("The elements of the array are:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", **dptr); // print the value pointed by the double pointer
        (*dptr)++; // increment the pointer by one
    }
    printf("\n");

    return 0;
}
