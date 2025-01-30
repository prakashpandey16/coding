// Q2. Create a class to specify data on students with these attributes: Roll number, Name, Department, Course,
// Year of joining. Create 2 class variables. Now, create a member function to check if two
// students have the same Department.
#include<iostream>
#include<string>
using namespace std;

class Class {
    private:
        int rollNumber;          // Roll number of the student
        string name;             // Name of the student
        string department;       // Department of the student
        string course;           // Course the student is enrolled in
        int Year_of_joining;      // Year the student joined the course

    public:
        // Constructor to initialize the student's details
        Class(int r, string N, string dep, string cour, int yoj) {
            rollNumber = r;
            name = N;
            department = dep;
            course = cour;
            Year_of_joining = yoj;
        }

        // Method to check if two students belong to the same department
        void check_department(const Class &obj) {
            if(department == obj.department) 
                cout << "Same Department";
            else 
                cout << "Different Department";
        }
};

int main() {
    // Creating two student objects with their respective details
    Class student1(192, "Prakash Pandey", "CS", "BCA", 2023);
    Class student2(200, "Rahul Singh", "BD", "BCA", 2023);

    // Checking if both students belong to the same department
    cout << "Check if two students have the same department:-> ";
    student1.check_department(student2);

    return 0;
}
