import java.util.Scanner;
public class array2 {
    public static void main(String[]args)
    {
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter First name :->");
        String name = sc.next();
        System.out.println("First name is :-> "+name);

        sc.nextLine();
        System.out.print("Enter full Name :-> ");
        String Full_Name = sc.nextLine();
        System.out.println("Full Name is :-> "+Full_Name);
        sc.close();
    }

}