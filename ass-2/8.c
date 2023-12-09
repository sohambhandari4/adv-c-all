// Write a program to find largest among “n” numbers using dynamic memory 
// allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    float *element;
		
    printf(" Input total number of elements : ");
    scanf("%d",&n);
    element=(float*)calloc(n,sizeof(float));  // Memory is allocated for 'n' elements 
    if(element==NULL)
    {
        printf(" No memory is allocated.");
        return 1 ;
    }
    
    for(i=0;i<n;++i)  
    {
       printf(" enter Number %d: ",i+1);
       scanf("%f",element+i);
    }
    for(i=1;i<n;++i)  
    {
       if(*element<*(element+i)) 
           *element=*(element+i);
    }
    printf(" The Largest element is :  %.2f \n\n",*element);
    return 0;
}