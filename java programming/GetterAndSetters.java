public class GetterAndSetters {
    // Define the Student class
    public static class Student {
        // Private fields for encapsulation
        private String name;        // To store the student's name
        private int rollNumber;     // To store the student's roll number
        private double percentage;  // To store the student's percentage

        // Getter for name
        public String getName() {
            return name; // Return the name of the student
        }

        // Setter for name
        public void setName(String name) {
            this.name = name; // Assign the provided name to the field
        }

        // Getter for rollNumber
        public int getRollNumber() {
            return rollNumber; // Return the roll number of the student
        }

        // Setter for rollNumber
        public void setRollNumber(int rollNumber) {
            this.rollNumber = rollNumber; // Assign the provided roll number to the field
        }

        // Getter for percentage
        public double getPercentage() {
            return percentage; // Return the percentage of the student
        }

        // Setter for percentage
        public void setPercentage(double percentage) {
            this.percentage = percentage; // Assign the provided percentage to the field
        }
    }

    // Main method to execute the program
    public static void main(String[] args) {
        // Create an instance of the Student class
        Student s1 = new Student();

        // Set the values of the fields using setter methods
        s1.setName("Prakash");        // Setting the student's name
        s1.setRollNumber(50);         // Setting the student's roll number
        s1.setPercentage(95.0);       // Setting the student's percentage

        // Display the values of the fields using getter methods
        System.out.println("Name is :-> " + s1.getName());           // Print the student's name
        System.out.println("Roll number is :-> " + s1.getRollNumber()); // Print the student's roll number
        System.out.println("Percentage is :-> " + s1.getPercentage());  // Print the student's percentage
    }
}

