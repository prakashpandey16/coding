  import java.util.*;
public class stringclass1 {
    public static void main(String[] args) {
        // String name = "Prakash";
        // String fullName = "Prakash pandey";
        // System.out.println(name);
        // System.out.println(fullName);
        //user input
        Scanner sc = new Scanner (System.in);

 // Input for single word
        System.out.print("Enter starting name:-> ");
        String name = sc.next(); // Reads a single word
        
        // Clear the buffer
        sc.nextLine();

        // Input for full name (allows spaces)
        System.out.print("Enter full name:-> ");
        String fullName = sc.nextLine();

        // Output the values
        System.out.println("Starting Name: " + name);
        System.out.println("Full Name: " + fullName);
        sc.close();

    }
}
    
    

