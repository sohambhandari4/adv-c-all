//Write a program to accept an array and a number .Write a function to find the 
// number of occurrences of number in the array.(usingpointer)
//  ass- 1 Q-5] same but one line added
#include <stdio.h>
int main()
{
   int arr[250], search,count , n, i;
 
   printf("Please enter how many elements should be available in an array\n");
   scanf("%d",&n);

   printf("\nPlease enter %d numbers or integers one by one\n", n);
   for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
 
   printf("\nPlease enter the number you want to search\n");
   scanf("%d", &search);
    
   for (i = 0; i < n; i++)
   {
      if (arr[i] == search)  
      {
         printf("\n%d is present at location %d\n", search, i+1);
         break;
      }
   }
   if (i == n)
      printf("%d is not available in the array.\n", search);

// Declare a pointer and point it to the beginning of the array
    int *arrPtr = arr; // **** added line ****
    
   //count occurance of num
    count = 0;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] == search)
            count++;
    }
    printf("Occurrence of %d is: %d\n", search, count);
    return 0;
}
