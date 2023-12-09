//Write a program to concatenate two strings
#include <stdio.h>
int main() 
{
  char s1[100] = "programming ", s2[] = "is awesome";
  int length, i;

  // store length of s1 in the length variable
  length = 0;
  while (s1[length] != '\0') 
  {
    ++length;
  }

  // concatenate s2 to s1
  for (i = 0; s2[i] != '\0'; ++i, ++length)
   {
    s1[length] = s2[i];
  }

  // terminating the s1 string
  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}
