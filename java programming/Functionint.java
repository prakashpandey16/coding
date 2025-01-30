import java.util.Scanner;
public class Functionint {
      public static int Sum(int a,int b)
      {
        return a+b;
      }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(Sum(a,b));
        sc.close();


    }
    
}