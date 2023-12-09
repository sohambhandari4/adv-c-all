//Write a program to multiply two numbers using function pointer
#include <stdio.h>
 
int main()
{

    int num1, num2;
    int    mul;
    int *ptr1, *ptr2;
 
    ptr1 = &num1; 
    ptr2 = &num2; 
 
    printf("Please enter two numbers for Multiplication: ");
    scanf("%d%d", ptr1, ptr2);
 
    mul = *ptr1 * *ptr2;
 
    printf("The Multiplication Results are = %d", mul);
 
    return 0;
}