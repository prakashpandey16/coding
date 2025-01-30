import java.util.*;
public class customEXceptionjava {
    public static class myExceptions extends Exception{
        myExceptions(String message)
        {
            super(message);
        }
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        try{
            int age = sc.nextInt();
            if(age>100)
            {
                throw new myExceptions("100 plus age is not allowed");
            }
            else
            {
                System.out.println("Age is : "+ age);
            }
        }
        catch(Exception e)
        {
         System.out.println("Exception is caught "+e.getMessage());
        }
        finally
        {
            sc.close();
        }
    }
    
}
