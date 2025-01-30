public class StaticKeyworduse { // Renamed class from 'constructor' to 'StaticKeyword'

    // Define the Student class
    public static class Student {
        // Fields to store student's details
        String name;        // Name of the student
        int rno;            // Roll number of the student
        double percentage;  // Percentage of the student
        final int Class = 12; // Constant (final) variable for class, value cannot be changed
        static int numberOfStudent; // Static field to keep track of the number of students
        
        // Default constructor (no parameters)
        public Student() {
            // Default constructor allows creation of a Student object without setting any values
        }

        // Parameterized constructor to initialize the fields
        public Student(String name, int rno, double percentage) {
            this.name = name;        // Assign provided name to the field 'name'
            this.rno = rno;          // Assign provided roll number to the field 'rno'
            this.percentage = percentage; // Assign provided percentage to the field 'percentage'
            numberOfStudent++;       // Increment the static counter every time a new student is created
        }

        // Static method to get the number of students created
        public static int get_numberOfStudent() {
            return numberOfStudent; // Return the current count of students created
        }
    } 
    
    // Main method to run the program
    public static void main(String[] args) {
        // Creating the first Student object and initializing with parameters
        Student s1 = new Student("Prakash", 25, 90);
        System.out.println(s1.name);  // Print the name of the first student
        System.out.println(Student.get_numberOfStudent());  // Print number of students using class method (static)

        // Creating the second Student object and initializing with parameters
        Student s2 = new Student("Rahul", 26, 95.5);
        System.out.println(s2.name);
        System.out.println(Student.get_numberOfStudent()); // Print updated number of students using class method

        // Creating the third Student object and initializing with parameters
        Student s3 = new Student("Jondo", 27, 89);
        System.out.println(s3.name);
        System.out.println(Student.get_numberOfStudent()); // Print updated number of students using class method
    }
}
