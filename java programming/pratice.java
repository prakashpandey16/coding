import java.util.Scanner;
public class pratice
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Size of Array :->");
        int size = sc.nextInt();
        int marks[] = new int[size];
        System.out.print("Enter Element of Array :->");
        for(int i=0;i<size;i++)
        {
            marks[i] = sc.nextInt();

        }
        System.out.print("Enter an element that you want to search in array :->");
        int x = sc.nextInt();
        boolean find = false;
        int index = -1;
        for(int i=0;i<size;i++)
        {
            if(marks[i]==x)
            {
                find = true;
                index = i;

            }
        }
        if(find) System.out.println("Element is present at index :-> "+index);
        else System.out.println("Element is not present in array");
        sc.close();



    }
}