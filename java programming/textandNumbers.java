public class textandNumbers {
    public static void main(String[] args) {
        int x = 10, y = 20, z = 30;

        // Printing the value of x
        System.out.println("The value of x is :-> " + x);

        // Printing the value of y
        System.out.println("The value of y is :-> " + y);

        // Dividing y by x
        z = y / x;  // This performs integer division
        System.out.println("The value of z is :-> " + z);

        // Adding x, y, and z, then printing the result
        System.out.println(x + y + z);

        // Concatenation of text with numbers (watch behavior)
        System.out.println("mast cheez :-> " + x + y + z);
    }
}

