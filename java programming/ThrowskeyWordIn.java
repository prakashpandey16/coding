public class ThrowskeyWordIn {
    // Method declaration with 'throws' keyword
    // Specifies that this method may throw an ArrayIndexOutOfBoundsException
    public static void print(int arr[]) throws ArrayIndexOutOfBoundsException {
        // Attempt to access an invalid index in the array
        // This will throw an ArrayIndexOutOfBoundsException
        System.out.println(arr[8]);
    }

    public static void main(String[] args) {
        // Declare and initialize an array of size 5
        int arr[] = new int[5];

        // Try block to call the 'print' method and handle any exceptions
        try {
            // Call the 'print' method
            print(arr);
        } 
        // Catch block to handle exceptions thrown by the 'print' method
        catch (Exception e) {
            // Print a message when an exception is caught
            System.out.println("Caught the Exception: " + e.getMessage());
        }
    }
}

