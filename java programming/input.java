import java.util.Scanner;

public class input {  // Class name should be capitalized
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius of the circle: ");  // Adding a prompt for the user
        int radius = sc.nextInt();
        double pi = 3.14;
        double area = pi * radius * radius;
        System.out.println("The area of the circle is: " + area);
        sc.close();

    }
}

