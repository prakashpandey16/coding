public class ConstructorOverLoading {

    // Nested static class Car
    public static class Car { 
        // Instance variables for the Car class
        int enginesize; // Engine size of the car
        int tyresize;   // Tire size of the car

        // Constructor 1: Parameterized constructor with two arguments
        public Car(int ts, int es) {
            // Initialize tyresize and enginesize with provided values
            tyresize = ts;
            enginesize = es;
        }

        // Constructor 2: Parameterized constructor with one argument
        public Car(int ts) {
            // Initialize tyresize with the provided value and enginesize with a default value
            tyresize = ts;
            enginesize = 2000; // Default engine size
        }

        // Constructor 3: Default constructor (no arguments)
        public Car() {
            // Initialize tyresize and enginesize with default values
            tyresize = 20;     // Default tire size
            enginesize = 1500; // Default engine size
        }
    }

    public static void main(String[] args) {
        // Creating a Car object using the two-parameter constructor
        Car honda = new Car(18, 1800);
        // Display the properties of the 'honda' object
        System.out.println("Honda engine size is :-> " + honda.enginesize);
        System.out.println("Honda Tyresize is :-> " + honda.tyresize);

        // Creating a Car object using the single-parameter constructor
        Car alto = new Car(15);
        // Display the properties of the 'alto' object
        System.out.println("Alto engine size is :-> " + alto.enginesize);
        System.out.println("Alto Tyresize is :-> " + alto.tyresize);

        // Creating a Car object using the default constructor
        Car bmw = new Car();
        // Display the properties of the 'bmw' object
        System.out.println("BMW engine size is :-> " + bmw.enginesize);
        System.out.println("BMW Tyresize is :-> " + bmw.tyresize);
    }
}

