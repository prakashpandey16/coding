#include<stdio.h>
#include<string.h>
// typedef use for creating alias of any variable matlab uska nickname create karne ke liye
typedef struct computerScienceStudent
{
    int rollNumber;
    float cgpa;
    char name[50];
} csc;
int main()
{
  csc s1 = {60,8.9,"prakash pandey"};
    printf("Student Name is:-> %s\n", s1.name);  
    printf("Student CGPA is:-> %f\n", s1.cgpa);  
    printf("Student Roll Number is:-> %d\n", s1.rollNumber);
}