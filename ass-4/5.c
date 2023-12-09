// Write a program to
//-compare two strings using library function
//-sets the portion of characters in a string to given character using library function
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    char character;
    int n;
    // Compare two strings using library function
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
     {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }
    // Set a portion of characters in a string to a given character using library function
    printf("Enter a character to set: ");
    scanf(" %c", &character);

    printf("Enter the number of characters to set: ");
    scanf("%d", &n);
    // Check if the length of the string is greater than or equal to 'n'
    if (strlen(str1) >= n)
     {
        // Set the first 'n' characters to the given character
        memset(str1, character, n);
        printf("After setting %d characters: %s\n", n, str1);
    } else {
        printf("Error: The length of the string is less than %d.\n", n);
    }

    return 0;
}
