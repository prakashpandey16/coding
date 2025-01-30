import java.util.*;
public class stringPratice {
    public static void main(String args[])
    {
        // Scanner sc = new Scanner(System.in);
        // String name = "Prakash pandey";
        // System.out.println("Name is : "+name);
        // System.out.print("Enter first name : ");
        // String first_name = sc.next();
        // System.out.println("First Name is : "+first_name);
        // System.out.print("Enter full name :");
        // sc.nextLine();
        // String full_name = sc.nextLine();
        // System.out.println("Full name is :"+full_name);

        //  String method 
        // 1. concatenations of two string
        String first_Name = "Prakash";
        String last_Name = "Pandey";
        String full_Name = first_Name + " " + last_Name;
        System.out.println("FULL Name is : "+full_Name);

        // 2.Length of string or size
        int size = full_Name.length();
        System.out.println("The size of String is : "+size);
        // 3. comparing two String
        String a = "TONY";
        String b = "TONY";
        if(a.compareTo(b)==0)
         System.out.println("Strings are equal");
         else
           System.out.println("Strings are not equal");
        // 4.substring of a string
        String subStr = full_Name.substring(0,7);
        System.out.println(subStr);
        
        // 5. printing all character of string 
        for(int i=0;i<size;i++)
        {
            System.out.println("String all character are : " +full_Name.charAt(i));
        }
        System.out.println();
    }
    
}
