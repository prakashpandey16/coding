
import java.util.*;
public class Array1 {
    public static void main(String[] args) {
        //array
        // int marks[] = new int[3];
        // marks[0] = 90;//c++
        // marks[1] = 88;//java
        // marks[2] = 94;// sad
        // System.out.println(marks[0]);
        // System.out.println(marks[1]);
        // System.out.println(marks[2]);
        // int marks[] = {12,13,19,20,40};
        // for(int i=0;i<5;i++)
        // {
        //     System.out.println(marks[i]);
        // }
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array :-> ");
        int size = sc.nextInt();
        int numbers[] = new int[size];
        for(int i=0;i<size;i++)
        { 
            numbers[i] = sc.nextInt();
        }
        System.out.println("Element of array :->");
        for(int i=0;i<size;i++)
        { 
           System.out.println(numbers[i]);
        } 
        sc.close();


    }
    
}
