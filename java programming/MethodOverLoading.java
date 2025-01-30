public class MethodOverLoading {

    // Method 1: Calculate the area of a rectangle
    // Takes two integer parameters: length and breadth
    void calculate_Area(int a, int b) {
        int area = a * b; // Formula: area = length * breadth
        System.out.println("The area of the rectangle is :-> " + area);
    }

    // Method 2: Calculate the area of a square
    // Takes one integer parameter: side length
    void calculate_Area(int s) {
        int area = s * s; // Formula: area = side * side
        System.out.println("The area of the square is :-> " + area);
    }

    // Method 3: Calculate the area of a circle
    // Takes one double parameter: radius
    void calculate_Area(double r) {
        double pi = 3.1427; // Constant value for pi
        double area = r * r * pi; // Formula: area = pi * radius^2
        System.out.println("The area of the circle is :-> " + area);
    }

    public static void main(String[] args) {
        // Create an object of the MethodOverLoading class to call non-static methods
        MethodOverLoading obj = new MethodOverLoading();

        // Call the method to calculate the area of a rectangle
        obj.calculate_Area(10, 20); // Rectangle with length = 10 and breadth = 20

        // Call the method to calculate the area of a square
        obj.calculate_Area(10); // Square with side = 10

        // Call the method to calculate the area of a circle
        obj.calculate_Area(7.5); // Circle with radius = 7.5
    }
}

