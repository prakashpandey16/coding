public class ExceptionHandling {
    public static void main(String[] args) {
        // Declare and initialize an array of size 5
        int arr[] = new int[5];
        System.out.println("Hello guys");

        // Try block to handle potential exceptions
        try {
            // Attempt to access an invalid index in the array
            System.out.println(arr[8]); // This will throw ArrayIndexOutOfBoundsException

            // Attempt to divide by zero
             //int a = 5 / 0; // This line won't execute if the above line throws an exception
        } 
        // Catch block for ArrayIndexOutOfBoundsException
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("You are accessing out of bound index.");
        } 
        // Catch block for ArithmeticException
        catch (ArithmeticException e) {
            // Print the exception's message for clarity
            System.out.println("Exception caught: " + e.getMessage());
        } 
        // Handling multiple exceptions at once using a multi-catch block
        // **ERROR**: The `ArithmeticException` and `ArrayIndexOutOfBoundsException` were already caught separately above.
        // Remove this block to fix redundancy.
        /*
        catch (ArithmeticException | ArrayIndexOutOfBoundsException | NullPointerException e) {
            System.out.println("Handling multiple exceptions");
        }
        */

        // Catch-all block to handle any other exceptions not specifically caught
        catch (Exception e) {
            System.out.println("Handled all exceptions");
        }

        // This block executes regardless of exceptions
        System.out.println("Bye Guys");
    }
}

