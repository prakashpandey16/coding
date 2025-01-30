public class classAndObjects {
    public static class student // user defined class 
    {
        String name;
        int rno;
        double percentage;

    }

    public static void main(String[] args) {
        // object creation
        student s1 = new student();
        s1.name = "prakash";
        s1.rno = 50;
        s1.percentage = 90.5;
        // printing 
        System.out.println(s1.name);
        System.out.println(s1.rno);
        System.out.println(s1.percentage);
        // second  object creations
        student s2  = new student();
        s2.name = "Rahul";
        s2.rno = 51;
        s2.percentage = 91.5;
         // printing 
         System.out.println(s2.name);
         System.out.println(s2.rno);
         System.out.println(s2.percentage);


        
    }
    
}