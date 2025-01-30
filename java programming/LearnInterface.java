// Main class to demonstrate the use of interfaces
public class LearnInterface {

    // Define an interface named 'Animal'
    interface Animal {
        int LEGS = 4; // Constant variable (public, static, and final by default)

        // Abstract methods that must be implemented by any class that implements this interface
        void eats();
        void drinks();
    }

    // Define another interface named 'Human'
    interface Human {
        // Abstract method to be implemented by any class that implements this interface
        void walk();
    }

    // Define a class 'Monkey' that implements both interfaces: Animal and Human
    public static class Monkey implements Animal, Human {

        // Implementation of the 'eats' method from the Animal interface
        public void eats() {
            System.out.println("Monkey is eating");
        }

        // Implementation of the 'drinks' method from the Animal interface
        public void drinks() {
            System.out.println("Monkey is drinking");
        }

        // Implementation of the 'walk' method from the Human interface
        public void walk() {
            System.out.println("Monkey is walking");
        }
    }

    // Main method to execute the program
    public static void main(String[] args) {
        // Create an object of the Monkey class
        Monkey chunnu = new Monkey();

        // Call the implemented methods
        chunnu.eats();  // Output: Monkey is eating
        chunnu.drinks(); // Output: Monkey is drinking
        chunnu.walk();   // Output: Monkey is walking

        // Access the constant from the Animal interface
        System.out.println("Monkeys typically have " + Animal.LEGS + " legs.");
    }
}
