public class hellopratice {
//     // inheritance example
//     public  static class vehicle
//     {
//        int tyresize;
//        int enginesize;
//        String companyName;
       

//     }
//     public static class bike extends vehicle
//     {
//       int handlesize;

//     } 
//     public static void main(String args[])
//     {
//         bike splender = new bike();
//         splender.tyresize = 10;
//         splender.enginesize = 110;
//         splender.companyName = "Hero";
//         splender.handlesize = 15;
//         System.out.println(splender.companyName);
//         System.out.println(splender.enginesize);
//         System.out.println(splender.tyresize);
//         System.out.println(splender.handlesize);

//     }

// constuctor overloading
public static class car
{
    int tyresize;
    int enginesize;
    car(int tyresize)
    {
        this.tyresize = tyresize;
        enginesize = 1500;
    }
    car(int tyresize,int enginesize)
    {
        this.tyresize = tyresize;
        this.enginesize = enginesize;
    }
}
public static void main(String args[])
{
    car alto = new car(16);
    car honda = new car(18,2000);
    System.out.println(alto.tyresize);
    System.out.println(alto.enginesize);
    System.out.println(honda.tyresize);
    System.out.println(honda.enginesize);

}


























}
