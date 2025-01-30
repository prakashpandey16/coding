#include<stdio.h>
#include<string.h>

// Define a user-defined datatype (structure) for storing student information
struct Student {
    int rollNumber;      // Roll number of the student
    float cgpa;          // CGPA of the student
    char name[100];      // Name of the student (character array)
};

// Function to print student details (Pass by Value)
void printinfo(struct Student s1) {
    printf("\n[Pass by Value]\n");
    printf("Student Name is:-> %s\n", s1.name);  
    printf("Student CGPA is:-> %f\n", s1.cgpa);  
    printf("Student Roll Number is:-> %d\n", s1.rollNumber);
    s1.rollNumber = 70;  // This change is local to this function
}

// Function to print student details (Pass by Reference)
void print(struct Student *ptr) {
    printf("\n[Pass by Reference]\n");
    printf("Student Name is:-> %s\n", (*ptr).name);  
    printf("Student CGPA is:-> %f\n", ptr->cgpa);  
    printf("Student Roll Number is:-> %d\n", ptr->rollNumber);
    (*ptr).rollNumber = 70;  // Changes original structure data
}

int main() {
    // Single structure instance
    struct Student s1;
    s1.cgpa = 8.5;
    s1.rollNumber = 89;
    strcpy(s1.name, "Prakash Pandey");  // Copy name into character array

    printf("\n[Single Structure Instance]\n");
    printf("Student Name is:-> %s\n", s1.name);
    printf("Student Roll Number is:-> %d\n", s1.rollNumber);
    printf("Student CGPA is:-> %f\n", s1.cgpa);

    // Array of structures
    struct Student BCA[100];
    BCA[0].rollNumber = 100;
    BCA[0].cgpa = 8.0;
    strcpy(BCA[0].name, "Rahul");  // Copy name into character array

    printf("\n[Array of Structures]\n");
    printf("Student Name is:-> %s\n", BCA[0].name);
    printf("Student Roll Number is:-> %d\n", BCA[0].rollNumber);
    printf("Student CGPA is:-> %f\n", BCA[0].cgpa);

    // Initializing structure using shorthand
    struct Student s2 = {50, 8.5, "Jondo"};

    printf("\n[Initialized Structure]\n");
    printf("Student Name is:-> %s\n", s2.name);
    printf("Student Roll Number is:-> %d\n", s2.rollNumber);
    printf("Student CGPA is:-> %f\n", s2.cgpa);

    // Pointer to structure
    struct Student s3 = {51, 8.0, "Pari"};
    struct Student *ptr = &s3;

    printf("\n[Pointer to Structure]\n");
    printf("Student Name is:-> %s\n", (*ptr).name);
    printf("Student CGPA is:-> %f\n", ptr->cgpa);
    printf("Student Roll Number is:-> %d\n", ptr->rollNumber);

    // Pass structure to function (Pass by Value)
    printinfo(s3);

    // Pass structure to function (Pass by Reference)
    print(ptr);

    // Check if roll number was updated in the original structure
    printf("\n[Updated Roll Number After Pass by Reference]\n");
    printf("Student Roll Number is:-> %d\n", s3.rollNumber);

    return 0;
}

