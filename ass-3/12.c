//Write a program to print the words ending with letter d in the given 
//sentence(multiword string).
#include <stdio.h>
#include <string.h>
 
char str[100];
 
void main()
{
    int i, t, j, len;
 
    printf("Enter a string : ");
    scanf("%[^\n]d", str);
 
    len = strlen(str);
 
    str[len] = ' ';
 
    for (t = 0, i = 0; i < strlen(str); i++)
    {
        if ((str[i] == ' ') && (str[i - 1] == 'd'))
        {
            for (j = t; j < i; j++)
                printf("%c", str[j]);
            t = i + 1;
            printf("\n");
        }
        else
        {
            if (str[i] == ' ')
            {
                t = i + 1;
            }
        }
    }
}