#include<iostream>
using namespace std;

// Define a class named 'player'
class player {
 public:  // Access specifier: everything declared below this will be public and accessible outside the class

  // Data members (variables) of the class
  int score;  // Variable to store the player's score
  int health; // Variable to store the player's health

  // Member functions (methods) of the class
  void showhealth() {
    // Function to print the player's health to the console
    cout << health << endl;
  }

  void showscore() {
    // Function to print the player's score to the console
    cout << score << endl;
  }
};

int main() {
  // Declaring an object 'prakash' of class 'player'
  player prakash;

  // Assigning values to the object's data members
  prakash.score = 100;  // Setting the score of 'prakash' to 100
  prakash.health = 100; // Setting the health of 'prakash' to 100

  // Calling member functions to print the values
  prakash.showhealth(); // Prints the health of 'prakash'
  prakash.showscore();  // Prints the score of 'prakash'

  return 0;  // Return statement to end the main function
}
