public class praticeException
{
    public static void main(String[] args) {
        int arr[] = new int[8];

        System.out.println("Hello pandey");

        try
        {
            System.out.println(arr[8]);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println(e.getMessage());
        }
        finally{
            System.out.println("Hello Prakash");
        }
        
    }
}
