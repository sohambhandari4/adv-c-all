//Write a program to Count number of words in the given sentence
#include <stdio.h>
#include <string.h>
 
void main()
{
    char str[200];
    int y = 0, x;
 
    printf("Enter The String To Find The No. Of Words: \n");
    scanf("%[^\n]str", str);
    for (x = 0;str[x] != '\0';x++)
    {
        if (str[x] == ' ' && str[x+1] != ' ')
            y++;    
    }
    printf("The No. Of Words In The Given String Is: %d\n", y + 1);
}