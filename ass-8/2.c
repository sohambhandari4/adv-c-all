// Write the Program to
//a. find maximum of two integers
//b. check whether a number is positive ,negative or Zero
//d. check given number is even or odd

#include <stdio.h>

int main()
{
    int num, num1, num2;

    /* Input two numbers from user */
    printf("Enter three numbers: ");
    scanf("%d%d%d",&num, &num1, &num2);

    /* If num1 is maximum */
    if(num1 > num2)
    {
        printf("%d is maximum", num1);        
    }

    /* If num2 is maximum */
    if(num2 > num1)
    {
        printf("%d is maximum", num2);
    }

    /* Additional condition check for equality */
    if(num1 == num2)
    {
        printf("Both are equal");
    }
// true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    //positive negative or zero
     if (num > 0) 
        printf("%d is positive.", num); 
    else if (num < 0) 
        printf("%d is negative.", num); 
    else if (num == 0) 
        printf("%d is zero.", num); 
  
    return 0; 
} 

