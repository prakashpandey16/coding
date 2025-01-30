public class finallyWordInExceptions {
    public static void main(String[] args) {
        // Declare and initialize an array of size 5
        int arr[] = new int[5];

        // Print initial message
        System.out.println("Hello world");

        try {
            // Attempt to access an invalid index in the array
            // This will throw an ArrayIndexOutOfBoundsException
            System.out.println(arr[8]);
        } 
        // Catch block to handle ArrayIndexOutOfBoundsException
        catch (ArrayIndexOutOfBoundsException e) {
            // Print an error message when the exception is caught
            System.out.println("Tried to access out of bound index");
        } 
        // Finally block
        finally {
            // This block will always execute, regardless of whether an exception occurred
            System.out.println("I always run either exceptions occur or not");
        }

        // This statement will execute after the try-catch-finally block
        System.out.println("Bye World");
    }
}
