//Write a program to find sum of n elements entered by user. To perform this, allocate 
// memory dynamically using malloc() function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int count;
    int *arr;
    int sum = 0;

    printf("Enter the total number of elements you want to enter : ");
    scanf("%d", &count);

    arr = (int *)malloc(count * sizeof(int));

    for (i = 0; i < count; i++)
    {
        printf("Enter element %d : ", (i + 1));
        scanf("%d", arr + i);

        sum += *(arr + i);
    }

    printf("sum is %d \n", sum);

    free(arr);
    return 0;
}