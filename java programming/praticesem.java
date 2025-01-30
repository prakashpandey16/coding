public class praticesem {
    public static void main(String args[])
    {
        System.out.println("Hello worls");
        int a = 20;
        System.out.println(a);
        char ch = 'a';
        System.out.println(ch);
        double b = 20.4;
        System.out.println(b);
        String s = "prakash pandey";
        System.out.println(s);
        // array
        int arr[] = new int [5];
        arr[0] = 12;
        arr[1] = 20;
        arr[2] = 23;
        arr[3] = 24;
        arr[4] = 28;
        for(int i=0;i<arr.length;i++)
        {
          System.out.print(arr[i]+ " ");
        }
        System.out.println();
        int brr[] = {1,2,3,4,5,6};
        int length = brr.length-1;
        while(length>=0)
        {
            System.out.print(brr[length] + " ");
            length--;
            
        }
        System.out.println();
     s = "prakash pandey";
     int size = s.length();
     int i = 0;
     do 
     {
        System.out.println(s.charAt(i));
        i++;

     } while(i<size);
    }

    
}
