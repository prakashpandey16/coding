public class Inheritance {
    public static class  vehicle{
        int price;
        int enginesize;
        String companyName;

        public vehicle()
        {
            System.out.println("vehicle constructor is called");
        }
    }
    public static class car extends vehicle
    {
        int streering;

        public car()
        {
            System.out.println("car constructor is called");
        }
    }
    public static class Truck extends vehicle
    {
        int payloadCapacity;

    }
    public static void main(String[] args) {
        car bmw = new car();
        bmw.companyName = "BMW";
        bmw.enginesize = 2000;
        bmw.price = 5000000;
        bmw.streering = 2;
        System.out.println(bmw.companyName);
        System.out.println(bmw.enginesize);
        System.out.println(bmw.price);
        System.out.println(bmw.streering);
        Truck sigma = new Truck();
        sigma.companyName = "TATA sigma";
        sigma.enginesize = 2000;
        sigma.price = 5000000;
        sigma.payloadCapacity = 50;
        System.out.println(sigma.companyName);
        System.out.println(sigma.enginesize);
        System.out.println(sigma.price);
        System.out.println(sigma.payloadCapacity);
    }
    
}
