#include <stdio.h>
#include <string.h> // Required for string functions like strcpy, strcat, strcmp, strlen

int main() {
    // Demonstration of strcpy
    char name[100]; // Declare a character array to hold a string
    strcpy(name, "Prakash"); // Copy "Prakash" into the 'name' array
    printf("%s\n", name); // Print the string stored in 'name'

    // Demonstration of string initialization
    char str[7] = "Hello"; // Initialize a string with size 7 (including null terminator '\0')
    printf("%s\n", str); // Print the initialized string

    // fgets to get full line input
    char str2[100];
    printf("Enter a string: ");
    fgets(str2, 100, stdin); // Use fgets to get a string with spaces from the user
    printf("%s\n", str2); // Print the user-entered string

    // Basic operations on strings
    // strcat: Concatenates two strings
    char s1[50]; // Make sure to allocate enough space for concatenation
    strcpy(s1, "Prakash "); // Copy "Prakash " into s1
    char s2[30];
    strcpy(s2, "Pandey"); // Copy "Pandey" into s2
    strcat(s1, s2); // Concatenate s2 to s1
    printf("Full Name is :-> %s\n", s1);

    // strlen: Find the length of a string
    int length = strlen(s1); // Find the length of the concatenated string
    printf("The length of the string is :-> %d\n", length);

    // strcmp: Compare two strings
    char str1[] = "Tony";
    char str2_compare[] = "Tony"; // Renamed to avoid confusion with the earlier 'str2'
    if (strcmp(str1, str2_compare) == 0) { // Compare str1 and str2_compare
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // Reverse a string
    char reverse_name[] = "Prakash"; // Original string to reverse
    int n = strlen(reverse_name); // Find the length of the string
    char temp[30]; // Temporary array to hold the reversed string
    for (int i = 0; i < n; i++) {
        temp[i] = reverse_name[n - i - 1]; // Copy characters in reverse order
    }
    temp[n] = '\0'; // Null-terminate the reversed string
    printf("Reverse String is :-> %s\n", temp); // Print the reversed string

    return 0;
}
