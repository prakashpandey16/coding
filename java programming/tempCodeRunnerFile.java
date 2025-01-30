public class tempCodeRunnerFile {
    public static void main(String[] args) {
        int arr[] = new int[5];
        System.out.println("Hello world");
        try{
            System.out.println(arr[8]);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Tried to access out of bound index");
        }
        finally
        {
            System.out.println("I always run either exceptions occurs and not ");

        }
        System.out.println("Bye World");
    }
    
}