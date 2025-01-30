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

    // Getter functions to retrieve the values of private data members
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
  
  player prakash;  // Create an object 'prakash' of class 'player' using static memory allocation

  // Set the player's name, health, and score for the 'prakash' object
  prakash.set_name("Prakash Pandey"); 
  prakash.set_health(100);            
  prakash.set_score(80); 
  
  // Create a pointer 'rahul' to an object of class 'player' using dynamic memory allocation
  player *rahul = new player;
  
  // Dereference the pointer 'rahul' to create a new object 'rahulOfObject'
  player rahulOfObject  = *rahul;           

  // Display the name, health, and score of the 'prakash' object
  cout << prakash.show_name() << endl; 
  cout << prakash.show_health() << endl; 
  cout << prakash.show_score() << endl << endl; 

  // Set and display health and score for 'rahulOfObject'
  rahulOfObject.set_health(50);
  rahulOfObject.set_score(180);
  cout << rahulOfObject.show_health() << endl;
  cout << rahulOfObject.show_score() << endl;

  // Set and display health for the object pointed to by 'rahul' using pointer dereference
  (*rahul).set_health(80);
  cout << (*rahul).show_health() << endl;
  
  // Set and display score for the object pointed to by 'rahul' using arrow operator
  rahul->set_score(100);
  cout << rahul->show_score() << endl;

  return 0;  
}
