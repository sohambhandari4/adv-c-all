//Write a program to accept two matrices of size 3x3 and print the addition using 
// pointer.

#include<stdio.h>
int main()
{
    
int matrix1[10][10], matrix2[10][10], sumOfMatrix[10][10];

printf("Enter first 3*3 matrix : ");
for(int i = 0; i < 3; i++)
{
for(int j = 0; j < 3; j++)
{
scanf("%d ", &matrix1[i][j]);
}
}
printf("\nEnter second 3*3 matrix: ");
for(int i = 0; i < 3; i++)
{
for(int j = 0; j < 3; j++)
{
scanf("%d ", &matrix2[i][j]);
}
}
printf("\n Sum of both matrix is :");
for(int i = 0; i < 3; i++)
{
for(int j = 0; j < 3; j++)
{
sumOfMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
printf("%d ", sumOfMatrix[i][j]);
}
printf("\n");
}
return 0;
}