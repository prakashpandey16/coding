// Class representing the concept of constructors in Java
public class constructor {
    
    // Define the Student class
    public static class Student {
        // Fields to store student's details
        String name;        // Name of the student
        int rno;            // Roll number of the student
        double percentage;  // Percentage of the student
        final int Class = 12; // Constant (final) variable for class, value cannot be changed

        // Default constructor (no parameters)
        public Student() {
            // Default constructor does nothing, allows creation of a Student object without setting any values
        }

        // Parameterized constructor (with parameters)
        // This constructor allows initialization of the fields with specific values when the object is created
        public Student(String name, int rno, double percentage) {
            this.name = name;        // Assign provided name to the field 'name'
            this.rno = rno;          // Assign provided roll number to the field 'rno'
            this.percentage = percentage; // Assign provided percentage to the field 'percentage'
        }
    }

    // Main method to run the program
    public static void main(String[] args) {
        // Create an instance of the Student class using the parameterized constructor
        Student s1 = new Student("Prakash", 25, 90); // Pass name, roll number, and percentage to initialize the fields

        // Display the values of the student's fields
        System.out.println("Name is :-> " + s1.name);          // Print the student's name
        System.out.println("Class is :-> " + s1.Class);        // Print the class (which is constant and equals 12)
        System.out.println("Roll number is :-> " + s1.rno);    // Print the student's roll number
        System.out.println("Percentage is :-> " + s1.percentage); // Print the student's percentage
    }
}
