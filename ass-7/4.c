//Write a program to store and access “ name, subject and percentage” for one 
//student.(using pointer to union)
#include <stdio.h>

// Union for student information
union StudentInfo {
    char name[50];
    char subject[50];
    float percentage;
};

int main() {
    // Declare a union variable to store student information
    union StudentInfo student;

    // Declare a pointer to the union
    union StudentInfo *ptr_student = &student;

    // Store information for the student
    printf("Enter details for the student:\n");
    printf("Name: ");
    scanf("%s", ptr_student->name);

    printf("Subject: ");
    scanf("%s", ptr_student->subject);

    printf("Percentage: ");
    scanf("%f", &ptr_student->percentage);

    // Display information for the student using the pointer
    printf("\nDetails for the student:\n");
    printf("Name: %s\n", ptr_student->name);
    printf("Subject: %s\n", ptr_student->subject);
    printf("Percentage: %.2f\n", ptr_student->percentage);

    return 0;
}
