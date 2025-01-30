import java.util.Scanner;
public class javaprogram {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a;
        double b;
        System.out.print("Enter value of a :-> ");
        a = sc.nextInt();
        System.out.print("Enter value of b :-> ");
         b = sc.nextDouble();
        double sum = a + b;
        System.out.print("The sum of a and b is :-> "+sum);
        char ch;
        ch = sc.next().charAt(0);
        System.out.println(ch);
        int x = (int)ch;
        System.out.println(x);
        sc.close();


    }
    
}
