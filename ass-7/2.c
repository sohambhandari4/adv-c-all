//Write a program to declare a structure "employee"(name, age, salary) which contains 
//another structure "address"(house number, street) as member variable. Accept the 
//details of one employee and display it.(using pointer variable)
#include <stdio.h>

// Structure for address
struct address {
    int house_number;
    char street[50];
};

// Structure for employee
struct employee {
    char name[50];
    int age;
    float salary;
    struct address emp_address; // Embedding address structure
};

int main() {
    // Declare an employee structure variable
    struct employee emp;

    // Declare a pointer to the employee structure
    struct employee *ptr_emp = &emp;

    // Accept details of the employee
    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", ptr_emp->name);
    
    printf("Age: ");
    scanf("%d", &ptr_emp->age);

    printf("Salary: ");
    scanf("%f", &ptr_emp->salary);

    printf("Enter address details:\n");
    printf("House Number: ");
    scanf("%d", &ptr_emp->emp_address.house_number);

    printf("Street: ");
    scanf("%s", ptr_emp->emp_address.street);

    // Display the details of the employee using pointer variable
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", ptr_emp->name);
    printf("Age: %d\n", ptr_emp->age);
    printf("Salary: %.2f\n", ptr_emp->salary);
    printf("Address: %d, %s\n", ptr_emp->emp_address.house_number, ptr_emp->emp_address.street);

    return 0;
}
