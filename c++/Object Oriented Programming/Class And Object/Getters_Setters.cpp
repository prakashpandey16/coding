#include<iostream>
using namespace std;

// Define a class named 'player'
class player {
  private:
    // Private data members (variables) of the class
    string name;  // Variable to store the player's name
    int health;   // Variable to store the player's health
    int score;    // Variable to store the player's score

  public:
    // Setter functions (also known as mutators) to set the values of private data members
    void set_name(string a) {
      // This function sets the player's name
      name = a;
    }

    void set_health(int n) {
      // This function sets the player's health
      health = n;
    }

    void set_score(int m) {
      // This function sets the player's score
      score = m;
    }

    // Getter functions (also known as accessors) to retrieve the values of private data members
    string show_name() {
      // This function returns the player's name
      return name;
    }

    int show_health() {
      // This function returns the player's health
      return health;
    }

    int show_score() {
      // This function returns the player's score
      return score;
    }
};

int main() {
  // Declaring an object 'prakash' of class 'player'
  player prakash;

  // Setting the values of the private data members using the setter functions
  prakash.set_name("Prakash Pandey"); // Sets the name to "Prakash Pandey"
  prakash.set_health(100);            // Sets the health to 100
  prakash.set_score(80);              // Sets the score to 80

  // Retrieving and printing the values of the private data members using the getter functions
  cout << prakash.show_name() << endl;  // Prints the player's name
  cout << prakash.show_health() << endl; // Prints the player's health
  cout << prakash.show_score() << endl;  // Prints the player's score

  return 0;  // Return statement to end the main function
}

