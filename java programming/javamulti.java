public class javamulti
{
    public static class MultithreadingExmple extends Thread
    {
       public void run()
       {
        int a = 10;
        int b = 20;
        System.out.println("Multithreading is running");
        System.out.println("The sum is :"+(a+b));
       }
    }
    public static void main(String args[])
    {
       MultithreadingExmple x1 = new MultithreadingExmple();
       MultithreadingExmple x2 = new MultithreadingExmple();
       x1.start();
       x2.start();
    }
}