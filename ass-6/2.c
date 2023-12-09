//Write a program to create student structure having fields roll_no, stud_name, 
//mark1, mark2, mark3.
//Calculate the total and average of marks
#include<stdio.h>
#include<conio.h>
struct  student
{
int rno ;
char name[20] ;
int marks[3] ;
int total ;
float avg ;
} 
stud[2] ;
int  main( )
{
int i, j ;
struct student s ;
for( i = 0 ; i < 2 ; i++ )
{
      printf("\n Enter Record for Student-%d \n", i+1 ) ;
      printf(" Enter Roll-No. : ") ;
      scanf("%d",&stud[i].rno ) ;
      printf(" Enter Name : ") ;
      scanf("%s", stud[i].name) ;
      stud[i].total = 0 ;
      for( j = 0 ; j < 3 ; j++ )
      {
            printf(" Enter Marks of Subject %d : ", j+1 ) ;
            scanf("%d",&stud[i].marks[j] ) ;
            stud[i].total = stud[i].total + stud[i].marks[j] ;
            stud[i].avg = stud[i].total/3.0 ;
      }
    
}

printf("\n ROLLNO NAME TOTAL-MARKS AVG\n") ;
for( i = 0 ; i < 2 ; i++ )
{
      printf("\n %d\t %s\t %d\t %.2f", stud[i].rno, stud[i].name, stud[i].total, stud[i].avg ) ;
}
return 0 ;
}