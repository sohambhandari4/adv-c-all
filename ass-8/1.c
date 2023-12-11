//Write the Program to implement macros for example:-define constant and array size
#include<stdio.h>  
  
#define N 7  // this is macro 
  
int main()  
{  
    int a[N], i;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    printf("Array elements are:\n");  
    for(i = 0; i < N; i++)  
        printf("%d\n", a[i]);  
  
    return 0;  
} 

#include<stdio.h>  
  
int main()  
{  
    const int N = 5;  // this is constant
    int a[N], i;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    printf("Array elements are:\n");  
    for(i = 0; i < N; i++)  
        printf("%d\n", a[i]);  
  
    return 0;  
} 