#include<iostream>
using namespace std;

// Define a class named 'player' to represent a player's attributes and behaviors
class player{
    private:
    int age;       // Stores the age of the player
    int score;     // Stores the score of the player
    int health;    // Stores the health level of the player
    bool islive;   // Stores whether the player is alive or not

    public:
    // Setter methods to set the values of private variables

    // Sets the player's age
    void set_age(int age)
    {
      this->age = age; // The 'this' pointer is used to distinguish between the class member and the parameter
    }

    // Sets the player's score
    void set_score(int score)
    {
      this->score = score;
    }

    // Sets the player's health
    void set_health(int health)
    {
      this->health = health;
    }

    // Sets the player's status (alive or not)
    void set_islive(bool islive)
    {
      this->islive = islive;
    }

    // Getter methods to retrieve the values of private variables

    // Returns the player's age
    int get_age()
    {
        return age;
    }

    // Returns the player's score
    int get_score()
    {
        return score;
    }

    // Returns the player's health
    int get_health()
    {
        return health;
    }

    // Returns whether the player is alive or not
    bool get_Islive()
    {
        return islive;
    }
};

// Function to add the scores of two players
int addscore(player a, player b)
{
  return a.get_score() + b.get_score(); // Adds and returns the scores of players 'a' and 'b'
}

// Function to determine which player has the higher score
player getmaxscore(player a, player b)
{
  if(a.get_score() > b.get_score()) // Compare the scores of players 'a' and 'b'
    return a;  // Return player 'a' if they have a higher score
  else 
    return b;  // Otherwise, return player 'b'
}

int main()
{
  // Create an object 'prakash' of class 'player'
  player prakash;
  prakash.set_age(19);       // Set Prakash's age to 19
  prakash.set_score(80);     // Set Prakash's score to 80
  prakash.set_health(100);   // Set Prakash's health to 100
  prakash.set_islive(true);  // Set Prakash's status as alive

  // Create another object 'rahul' of class 'player'
  player rahul;
  rahul.set_age(18);         // Set Rahul's age to 18
  rahul.set_health(85);      // Set Rahul's health to 85
  rahul.set_score(100);      // Set Rahul's score to 100
  rahul.set_islive(true);    // Set Rahul's status as alive

  // Output the attributes of the first player (Prakash)
  cout << "Prakash's Age: " << prakash.get_age() << endl;
  cout << "Prakash's Score: " << prakash.get_score() << endl;
  cout << "Prakash's Health: " << prakash.get_health() << endl;
  cout << "Prakash's Status (Alive): " << prakash.get_Islive() << endl;

  // Output the attributes of the second player (Rahul)
  cout << "Rahul's Age: " << rahul.get_age() << endl;
  cout << "Rahul's Score: " << rahul.get_score() << endl;
  cout << "Rahul's Health: " << rahul.get_health() << endl;
  cout << "Rahul's Status (Alive): " << rahul.get_Islive() << endl;

  // Calculate and output the sum of both players' scores
  cout << "Total Score of Prakash and Rahul: " << addscore(rahul, prakash) << endl;

  // Determine and output the player with the maximum score
  player jondo = getmaxscore(prakash, rahul);
  cout << "Player with Max Score: " << jondo.get_score() << endl;

  return 0; // Exit the program
}
