import java.util.Scanner;
public class IfElse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value :-> ");
        int a  = sc.nextInt();
        if(a%2==0) 
        {
            System.out.println("Even number");
        }
        else 
        {
            System.out.println("Odd");
        }
        sc.close();

        
    }
    
}