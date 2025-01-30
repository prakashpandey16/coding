import java.util.Scanner;

public class Remainder {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter the value of a :-> ");
        int a = sc.nextInt();
        System.out.print("Enter the value of b :-> ");
        int b = sc.nextInt();
        int remainder = a%b;
        System.out.println("Remainder of a and b is :-> "+remainder);
        sc.close();


    }
    
}
