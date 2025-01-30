import java.util.Scanner;
public class primeOrNot {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number :-> ");
        int n = sc.nextInt();
        boolean isprime = true;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                isprime = false;
                break;
            }
        }
        if(n<=1) System.out.println(n + " is neither prime nor composite");
        else if(isprime) System.out.println("Given number is prime number");
        else System.out.println("Given number is composite number");
        sc.close();

        

    }
    
}
