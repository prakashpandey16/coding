public class stringMethod1 { 
    public static String print(String name)
    {
        return name;
    }
    public static void main(String[] args) {
        // String name = "Prakash pandey";
        // System.out.println("Name is :-> "+print(name));
        String First_Name = "Prakash";
        String Last_Name = "Pandey";
        // concatenations
        String Full_Name = First_Name + " " + Last_Name;
        System.out.println("Full Name is :-> "+Full_Name);
        // string length 
        int  length_FullName = Full_Name.length();
        System.out.println("The Length of string is :-> "+length_FullName);
        // printing all character of string
        for(int i=0;i<Full_Name.length();i++)
        {
           System.out.println( " Printing All character of string is :-> "+ Full_Name.charAt(i) + " ");
        }
        // substing of a string
        String Substr = Full_Name.substring(0,8);
        System.out.println("Substring is :->" + Substr);
        // comparing two string 
        String s1 = "Tony";
        String s2 = "Tony";
        if(s1.compareTo(s2)==0)
        {
            System.out.println("String are equal");
        }
        else 
            System.out.println("String are not eqaul");



    }
    
}
