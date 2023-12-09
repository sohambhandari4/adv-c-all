//Write a program to pass two strings to user defined function and copy one string to 
//another using pointer
#include<stdio.h>

void copy_string(char*, char*);

main()
{
    char source[100], target[100];    
    printf("Enter source string\n");    
    gets(source);    
    copy_string(target, source);    
    printf("Target string is \"%s\"\n", target);    
    return 0;
}

void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}