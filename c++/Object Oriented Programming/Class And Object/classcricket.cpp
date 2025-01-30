#include<iostream>
using namespace std;

// Define a class named 'cricket' to represent cricket players
class cricket
{
    // Private data members that store player details
    private:
    string name;           // Player's name
    int age;               // Player's age
    int numberOfMatches;   // Number of matches played
    int AverageScore;      // Average score of the player

    // Public member functions to set and get player details
    public:
    // Setter for the player's name
    void set_name(string name)
    {
        this->name = name; // 'this' pointer is used to refer to the calling object
    }

    // Setter for the player's age
    void set_age(int age) 
    {
        this->age = age;
    }

    // Setter for the number of matches played
    void set_numberOfmatch(int numberOfMatches)
    {
        this->numberOfMatches = numberOfMatches;
    }

    // Setter for the player's average score
    void set_average(int AverageScore)
    {
        this->AverageScore = AverageScore;
    }

    // Getter for the player's age
    int get_age()
    {
        return age;
    }

    // Getter for the player's name
    string get_name()
    {
        return name;
    }

    // Getter for the number of matches played
    int get_numberOfmatch()
    {
        return numberOfMatches;
    }

    // Getter for the player's average score
    int get_average()
    {
        return AverageScore;
    }
};

// Main function to demonstrate the usage of the 'cricket' class
int main()
{
    // Creating an object 'virat' of the 'cricket' class
    cricket virat;
    virat.set_name("Virat Kohli");   // Set the name of the player
    virat.set_age(30);               // Set the age of the player
    virat.set_average(80);           // Set the average score of the player
    virat.set_numberOfmatch(100);    // Set the number of matches played by the player

    // Creating another object 'ms' of the 'cricket' class
    cricket ms;
    ms.set_age(40);                  // Set the age of the player
    ms.set_name("MS Dhoni");         // Set the name of the player
    ms.set_numberOfmatch(80);        // Set the number of matches played by the player
    ms.set_average(50);              // Set the average score of the player

    // Array of 'cricket' objects to store multiple players
    cricket cricketers[2] = {virat, ms};

    // Loop through the array to display the details of each player
    for(int i = 0; i < 2; i++)
    {
        cout << "Name: " << cricketers[i].get_name() << endl;
        cout << "Age: " << cricketers[i].get_age() << endl;
        cout << "Number of Matches: " << cricketers[i].get_numberOfmatch() << endl;
        cout << "Average Score: " << cricketers[i].get_average() << endl;
        cout << endl; // Print a new line for better readability
    }
    
    return 0; // Indicate successful completion of the program
}

