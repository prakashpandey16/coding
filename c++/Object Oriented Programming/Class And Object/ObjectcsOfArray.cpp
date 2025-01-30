#include<iostream>
using namespace std;

// Define a class named 'player'
class player {
  private:
    // Private data members to store the player's details
    string name;  // Variable to store the player's name
    int health;   // Variable to store the player's health
    int score;    // Variable to store the player's score

  public:
    // Setter function to set the player's name
    void set_name(string a) {
      name = a;
    }

    // Setter function to set the player's health
    void set_health(int n) {
      health = n;
    }

    // Setter function to set the player's score
    void set_score(int m) {
      score = m;
    }

    // Getter function to return the player's name
    string show_name() {
      return name;
    }

    // Getter function to return the player's health
    int show_health() {
      return health;
    }

    // Getter function to return the player's score
    int show_score() {
      return score;
    }
};

int main() {
  // Create two objects of the 'player' class: 'prakash' and 'rahul'
  player prakash;
  player rahul;

  // Set values for Rahul's details using setter functions
  rahul.set_name("Rahul Singh Chouhan");
  rahul.set_health(90);
  rahul.set_score(95);

  // Set values for Prakash's details using setter functions
  prakash.set_name("Prakash Pandey");
  prakash.set_health(100);
  prakash.set_score(80);

  // Display Rahul's details using getter functions
  cout << rahul.show_name() << endl;    // Output: Rahul's name
  cout << rahul.show_health() << endl;  // Output: Rahul's health
  cout << rahul.show_score() << endl;   // Output: Rahul's score

  // Display Prakash's details using getter functions
  cout << prakash.show_name() << endl;    // Output: Prakash's name
  cout << prakash.show_health() << endl;  // Output: Prakash's health
  cout << prakash.show_score() << endl;   // Output: Prakash's score

  // Create an array of 'player' objects
  player players[2] = {prakash, rahul};

  // Access and display the health of the first player in the array (Prakash)
  cout << players[0].show_health() << endl;  // Output: Prakash's health

  // Access and display the name of the second player in the array (Rahul)
  cout << players[1].show_name() << endl;    // Output: Rahul's name

  return 0;  // End of the main function
}

