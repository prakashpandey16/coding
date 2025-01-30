public class reverseAnArray{
    public static void reverseArray(int arr[])
    {
        int n = arr.length;
        for(int i=0;i<n/2;i++)
        {
            int temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i] + " ");
        }

    }
        public static void main(String[] args) {
        int arr[] = {10,20,30,40,50};
        System.out.print("Before reverse :->");
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        System.out.print("After reverse :->");
        reverseArray(arr);

    }
}