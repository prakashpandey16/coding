 import java.util.Scanner;
public class If {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value :-> ");
        int a  = sc.nextInt();
        if(a%2==0) 
        {
            System.out.println("Even number");
        }
        if(a%2!=0)
        {
            System.out.println("Odd");
        }
        sc.close();

        
    }
    
}
