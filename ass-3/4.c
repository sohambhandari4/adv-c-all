// Write a program to check whether a given string is palindrome or not. (Write a 
// function which accepts a string and returns 1 if it is palindrome and 0otherwise)
#include <stdio.h>
#include <string.h>
  
int main()
{
    char str[] = { "oho" };
  
    // Start from leftmost and 
    // rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
  
    // Keep comparing characters
    // while they are same
    while (h > l) 
    {
        if (str[l++] != str[h--]) 
        {
            printf("%s is not a palindrome\n", str);
            return 0;
            // will return from here
        }
    }
  
    printf("%s is a palindrome\n", str);
  
    return 0;
}