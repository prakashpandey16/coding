import java.util.Scanner;

public class searchInAarray {
    public static void SearchInArray(int arr[],int a)
    {
        boolean find = false;
        int value = -1;
        int n = arr.length;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==a)
            {
                find = true;
                value = i;
                break;
            }
        }
        if(find) 
        { System.out.print("The element present at index:-> "+value);
      } 
      else {
        System.out.println("Not apresent in array");
      }


    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array :-> ");
        int size = sc.nextInt();
        int numbers[] = new int[size];
        System.out.print("Enter Elements of array :->");
        for(int i=0;i<size;i++)
        {    
            numbers[i] = sc.nextInt();
        }
        System.out.println("Enter a value that you want to search in array :->");
         int x = sc.nextInt();
         SearchInArray(numbers,x);
        
         sc.close();

    }
    
}
