public class StringMethod {
    public static void main(String[] args) {
        // '+' used for concatenation
        String name = "Prakash";
        String last_name = "Pandey";
        String fullName = name + " " + last_name; // Concatenation of strings
        System.out.println("Full Name: " + fullName);

        // str.length() used to calculate the length
        int length = fullName.length();
        System.out.println("Length of Full Name: " + length);

        // charAt() used to print all letters of the string
        System.out.print("Characters in Full Name: ");
        for (int i = 0; i < length; i++) {
            System.out.print(fullName.charAt(i) + " ");
        }
        System.out.println(); // Move to the next line after the loop

        // compareTo() used for comparing strings
        String s1 = "Tony";
        String s2 = "Tony";

        // Comparison rules:
        //  1. s1 > s2 => Positive value
        //  2. s1 == s2 => 0
        //  3. s1 < s2 => Negative value
        if (s1.compareTo(s2) == 0) {
            System.out.println("Strings are equal.");
        } else {
            System.out.println("Strings are not equal.");
        }

        // Substring example
        String sentence = "TonyStark";
        // substring(int start, int end) extracts substring from 'start' to 'end - 1'
        String substring = sentence.substring(0, 4); // Extracts "Tony"
        System.out.println("Substring: " + substring);

        // Important point: Strings are immutable in Java
        System.out.println("Note: Strings are immutable in Java.");
    }
}
