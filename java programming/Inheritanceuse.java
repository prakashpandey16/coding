public class Inheritanceuse {

    // Base class
    public static class Vehicle {
        // Common properties for all vehicles
        protected int tyresize;
        protected String companyName;
        protected int enginesize;

        // Constructor for Vehicle
        public Vehicle() {
            System.out.println("Vehicle constructor is called");
        }
    }

    // Subclass 'car' extending 'Vehicle'
    public static class car extends Vehicle {
        // Specific property for cars
        protected int steeringsize;

        // Constructor for car
        public car() {
            super(); // Calls the constructor of the base class
            System.out.println("Car constructor is called");
        }
    }

    // Subclass 'Bike' extending 'Vehicle'
    public static class Bike extends Vehicle {
        // Specific property for bikes
        protected int handlesize;

        // Constructor for Bike
        public Bike() {
            super(); // Calls the constructor of the base class
            System.out.println("Bike constructor is called");
        }
    }

    public static void main(String[] args) {
        // Creating a 'car' object
        System.out.println("Creating a car object...");
        car honda = new car();
        honda.tyresize = 20;
        honda.companyName = "Honda";
        honda.enginesize = 1500;
        honda.steeringsize = 2;

        // Printing details of the car
        System.out.println("Car details:");
        System.out.println("Company Name: " + honda.companyName);
        System.out.println("Tyre Size: " + honda.tyresize);
        System.out.println("Engine Size: " + honda.enginesize + "cc");
        System.out.println("Steering Size: " + honda.steeringsize);

        // Creating a 'Bike' object
        System.out.println("\nCreating a bike object...");
        Bike tvs = new Bike();
        tvs.companyName = "TVS";    // Setting company name for TVS
        tvs.tyresize = 12;          // Setting tire size for TVS
        tvs.enginesize = 150;       // Setting engine size for TVS
        tvs.handlesize = 5;

        // Printing details of the bike
        System.out.println("Bike details:");
        System.out.println("Company Name: " + tvs.companyName);
        System.out.println("Tyre Size: " + tvs.tyresize);
        System.out.println("Engine Size: " + tvs.enginesize + "cc");
        System.out.println("Handle Size: " + tvs.handlesize);
    }
}
