import java.util.*;

public class CustomException {
    
    // Define a custom exception class that extends the built-in Exception class
    public static class MyExceptions extends Exception {
        // Constructor to pass a custom message to the parent Exception class
        public MyExceptions(String message) {
            super(message);  // Call the parent constructor with the message
        }
    }

    public static void main(String[] args) {
        // Create a Scanner object to take user input
        Scanner sc = new Scanner(System.in);
        
        try {
            // Prompt the user to enter an age and read it as an integer
            System.out.print("Enter age: ");
            int age = sc.nextInt();  // Read an integer input from the user
            
            // Check if the entered age exceeds 100
            if (age > 100) {
                // If the age is greater than 100, throw a custom exception
                throw new MyExceptions("Age above 100 is not allowed!"); // Throw custom exception with a message
            } else {
                // If the age is valid, print the valid age
                System.out.println("Valid age: " + age);
            }
        } 
        // Catch block for handling the custom exception (MyExceptions)
        catch (MyExceptions e) {
            // Print the message from the custom exception
            System.out.println("Custom Exception: " + e.getMessage());
        } 
        // Catch block for handling other exceptions, such as invalid input (e.g., non-integer input)
        catch (InputMismatchException e) {
            System.out.println("Invalid input. Please enter a valid integer.");
        }
        // Catch any other exceptions
        catch (Exception e) {
            System.out.println("Caught a general exception: " + e.getMessage());
        } finally {
            // Close the scanner in the finally block to ensure it is closed regardless of exceptions
            sc.close();
        }
    }
}

