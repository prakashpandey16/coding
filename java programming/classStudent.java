public class classStudent {
    public static void main(String[] args) {
        // Create an object of the nested student class
        StudentClassALL.student s1 = new StudentClassALL.student();
        
        // Assign values
        s1.name = "prakash";
        s1.rno = 23;
        s1.percentage = 90.0;
        
        // Print values
        System.out.println(s1.name);
        System.out.println(s1.rno);
        System.out.println(s1.percentage);
    }
}

