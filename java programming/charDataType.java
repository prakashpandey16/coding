import java.util.Scanner;

public class charDataType {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a character: ");
        char ch = sc.next().charAt(0);  // Use next().charAt(0) to read a single character
        
        System.out.println("You entered: " + ch);
        sc.close();

    }
}

