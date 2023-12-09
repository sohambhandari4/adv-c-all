//Write a program to print Contents of 2-D character array(using pointer to array of 
//string)Refer to above example.
#include <stdio.h>

int main() {
    // Initialize a 2-D character array
    char strings[][20] = {"Hello", "World", "C", "Programming"};

    // Pointer to an array of strings
    char (*ptrToStrings)[20] = strings;

    // Iterate through each string and print its contents
    for (int i = 0; i < sizeof(strings) / sizeof(strings[0]); ++i) 
	{
        printf("String %d: %s\n", i + 1, *(ptrToStrings + i));
    }

    return 0;
}
