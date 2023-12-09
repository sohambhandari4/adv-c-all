//) Write a program to compare two strings. If they are not equal display their length 
//and if equal concatenate them
#include <stdio.h>
#include <string.h>

int main()
 {
    char str1[100], str2[100];

    // Accept two strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the two strings
    if (strcmp(str1, str2) != 0) 
    {
        // Strings are not equal
        printf("The strings are not equal.\n");
        printf("Length of the first string: %d\n", strlen(str1));
        printf("Length of the second string: %d\n", strlen(str2));
    } else {
        // Strings are equal
        printf("The strings are equal.\n");
        
        // Concatenate the two strings
        strcat(str1, str2);
        printf("Concatenated string: %s\n", str1);
    }

    return 0;
}
