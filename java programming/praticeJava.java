import java.util.Scanner;

public class praticeJava {
    public static class MyExceptions extends Exception
    {
        public MyExceptions(String message)
        {
            super(message);
        }

    }
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);
        try{
            System.out.print("Enter age :-> ");
            int age = sc.nextInt();
            if(age>100)
            {
                throw new MyExceptions("100 plus age is not allowed"); 
            }
            else{
                System.out.println("Print age :-> "+age);
            }

        }
        catch(MyExceptions e)
        {
            System.out.println("Exception is :-> "+ e.getMessage());
        }
        finally
        {
            sc.close();
        }
    }
    
}
