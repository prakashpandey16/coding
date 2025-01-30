// Define the main class
public class abstractclass {

    // Define an abstract class named Vehicle
    abstract public static class Vehicle {
        
        // Normal method in the abstract class
        void engineSize() {
            System.out.println("Enter an engine size");
        }

        // Abstract method: must be implemented by subclasses
        abstract void companyName();

        // Abstract method: must be implemented by subclasses
        abstract void brakes();
    }

    // Define a concrete class Car that extends the abstract class Vehicle
    public static class Car extends Vehicle {

        // Implementation of the abstract method companyName
        public void companyName() {
            System.out.println("Company name: Honda");
        }

        // Implementation of the abstract method brakes
        public void brakes() {
            System.out.println("This car has ABS brakes");
        }
    }

    // Main method to execute the program
    public static void main(String[] args) {
        // Create an object of the Car class
        Car honda = new Car();

        // Call the implemented methods
        honda.companyName(); // Output: Company name: Honda
        honda.brakes();      // Output: This car has ABS brakes

        // Call the normal method from the abstract class
        honda.engineSize();  // Output: Enter an engine size
    }
}
