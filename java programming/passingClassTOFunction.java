public class passingClassTOFunction {
    public static class Student
    {
        String name;
        int rno;
        double percentage;

    }
    // function 
    // class always passed with refernce
    public static void change(Student s)
    {
        s.name = "rahul";
    }
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "prakash";
        s1.rno = 50;
        s1.percentage = 90.5;
        System.out.println("Name is :->"+s1.name);
        change(s1);
        System.out.println("Name is :->"+s1.name);

    }
    
}
