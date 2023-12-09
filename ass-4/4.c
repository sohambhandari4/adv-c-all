//Write a program to compare only left most ‘n’ characters from the given string
//.Accept n and string to be compared from the user.(using pointer)

#include <stdio.h>
#include <string.h>
// Function to compare leftmost 'n' characters of two strings
int compareLeftN(const char *str1, const char *str2, int n) 
{
    while (n > 0) 
    {
        if (*str1 != *str2) 
        {
            return 0; // Characters are not equal
        }
        // Move to the next character
        str1++;
        str2++;
        n--;
    }
    return 1; // Strings are equal up to the first 'n' characters
}
int main() {
    char str1[100], str2[100];
    int n;
    // Accept 'n' from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // Accept strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    // Compare the leftmost 'n' characters
    if (compareLeftN(str1, str2, n)) 
    {
        printf("The leftmost %d characters are equal.\n", n);
    } else 
    {
        printf("The leftmost %d characters are not equal.\n", n);
    }
    return 0;
}
