#include<iostream>
using namespace std;

// Define a class named 'player'
class player {
  private: // Access specifier: everything declared below this is private and cannot be accessed directly from outside the class

    // Private data members (variables) of the class
    int score;  // Variable to store the player's score
    int health; // Variable to store the player's health

  public: // Access specifier: everything declared below this is public and can be accessed outside the class

    // Public member functions (methods) to access the private data members
    int showhealth() {
      // Function to return the value of the player's health
      return health;
    }

    int showscore() {
      // Function to return the value of the player's score
      return score;
    }
};

int main() {
  // Declaring an object 'prakash' of class 'player'
  player prakash;

  // The following line would cause an error because 'score' is private and cannot be accessed directly:
  // prakash.score = 100; // Uncommenting this line would result in a compilation error

  // Accessing private members through public member functions
  int health = prakash.showhealth(); // Accesses and stores the health value using the public function
  cout << "Health: " << health << endl; // Prints the health value

  int score = prakash.showscore(); // Accesses and stores the score value using the public function
  cout << "Score: " << score << endl; // Prints the score value

  return 0;  // Return statement to end the main function
}
