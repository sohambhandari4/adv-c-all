//Write a program to to store and access “ name, subject and percentage” for two 
//student.(using union)
#include <stdio.h>

// Union for student information
union StudentInfo {
    char name[50];
    char subject[50];
    float percentage;
};

int main() {
    // Declare a union variable to store student information
    union StudentInfo student1, student2;

    // Store information for the first student
    printf("Enter details for the first student:\n");
    printf("Name: ");
    scanf("%s", student1.name);

    printf("Subject: ");
    scanf("%s", student1.subject);

    printf("Percentage: ");
    scanf("%f", &student1.percentage);

    // Store information for the second student
    printf("\nEnter details for the second student:\n");
    printf("Name: ");
    scanf("%s", student2.name);

    printf("Subject: ");
    scanf("%s", student2.subject);

    printf("Percentage: ");
    scanf("%f", &student2.percentage);

    // Display information for both students
    printf("\nDetails for the first student:\n");
    printf("Name: %s\n", student1.name);
    printf("Subject: %s\n", student1.subject);
    printf("Percentage: %.2f\n", student1.percentage);

    printf("\nDetails for the second student:\n");
    printf("Name: %s\n", student2.name);
    printf("Subject: %s\n", student2.subject);
    printf("Percentage: %.2f\n", student2.percentage);

    return 0;
}
