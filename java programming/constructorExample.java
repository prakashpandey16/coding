public class constructorExample {
    public static class vehicle
    {
        int tyresize;
        int enginesize;
        String company_name;

        // default constructor
        vehicle()
        {
            // default values of constructor
            enginesize = 1500;
            tyresize = 16;
            company_name = "Unknown";
        }

        // parametrized constructor
        vehicle(int tyresize,int enginesize,String company_name)
        {
            this.enginesize = enginesize;
            this.tyresize = tyresize;
            this.company_name = company_name;
        }

    }
    public static void main(String args[])
    {
       // vehicle honda = new vehicle(18,2000,"Honda");
       vehicle honda = new vehicle(); 
       // if we don't pass arguement it is automatically initialize objects value

        System.out.println(honda.company_name);
        System.out.println(honda.enginesize);
        System.out.println(honda.tyresize);

    }
}
