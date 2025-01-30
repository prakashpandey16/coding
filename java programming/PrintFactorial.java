import java.util.Scanner;
public class PrintFactorial{
    public static void printfactorial(int n)
    {
        int factorial = 1;
        for(int i=n;i>1;i--)
        {
            factorial = factorial*i;
        }
        System.out.println("Factorial of Given Number is :-> " + factorial);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a  number :-> ");
        int n = sc.nextInt();
        printfactorial(n);
        sc.close();


        
        



    }
    
}
