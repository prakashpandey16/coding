#include<iostream>
using namespace std;

// Class representing a Gun
class Gun {
    public:
    int ammo;     // Number of bullets available in the gun
    int damage;   // Damage dealt by the gun
    int scope;    // Scope level of the gun (for aiming)
};

// Class representing a Player
class player {

    // Nested class representing a Helmet worn by the player
    class Helmet {
        private:
        int hp;      // Health points provided by the helmet
        int level;   // Level of the helmet (1, 2, or 3)

        public:
        // Setter for helmet's health points
        void set_hp(int hp) {
            this->hp = hp;
        }

        // Setter for helmet's level
        void set_level(int level) {
            this->level = level;
        }

        // Getter for helmet's health points
        int get_hp() {
            return hp;
        }

        // Getter for helmet's level
        int get_level() {
            return level;
        }
    };

    private:
    int age;       // Age of the player
    int score;     // Score of the player
    int health;    // Health points of the player
    bool islive;   // Status of the player (alive or not)
    Gun gun;       // Gun possessed by the player
    Helmet helmet; // Helmet worn by the player

    public:
    // Setter for player's age
    void set_age(int age) {
        this->age = age;
    }

    // Setter for player's score
    void set_score(int score) {
        this->score = score;
    }

    // Setter for player's health
    void set_health(int health) {
        this->health = health;
    }

    // Setter for player's status (alive or not)
    void set_islive(bool islive) {
        this->islive = islive;
    }

    // Setter for player's gun
    void set_gun(Gun gun) {
        this->gun = gun;
    }

    // Getter for player's age
    int get_age() {
        return age;
    }

    // Getter for player's score
    int get_score() {
        return score;
    }

    // Getter for player's health
    int get_health() {
        return health;
    }

    // Getter for player's status (alive or not)
    bool get_Islive() {
        return islive;
    }

    // Getter for player's gun
    Gun get_gun() {
        return gun;
    }

    // Method to set the player's helmet based on its level
    void set_helmet(int level) {
        helmet.set_level(level); // Set the helmet level
        int health = 0;

        // Determine the health points based on the helmet level
        if (level == 1) {
            health = 25;
        } else if (level == 2) {
            health = 50;
        } else if (level == 3) {
            health = 100;
        } else {
            cout << "Error, invalid level" << endl;
            return;  // Exit the function if the level is invalid
        }

        helmet.set_hp(health); // Set the helmet's health points
    }

    // Method to display the helmet's details
    void show_helmet() {
        cout << "Helmet HP: " << helmet.get_hp() << endl;
        cout << "Helmet Level: " << helmet.get_level() << endl;
    }
};

// Function to add the scores of two players
int addscore(player a, player b) {
    return a.get_score() + b.get_score();
}

// Function to determine which player has the maximum score
player getmaxscore(player a, player b) {
    if (a.get_score() > b.get_score())
        return a;
    else
        return b;
}

int main() {
    player prakash;  // Create a player object for Prakash
    prakash.set_age(19);  // Set age
    prakash.set_score(80);  // Set score
    prakash.set_health(100);  // Set health
    prakash.set_islive(true);  // Set alive status
    prakash.set_helmet(2);  // Set helmet level

    player rahul;  // Create a player object for Rahul
    rahul.set_age(18);  // Set age
    rahul.set_health(85);  // Set health
    rahul.set_score(100);  // Set score
    rahul.set_islive(true);  // Set alive status
    rahul.set_helmet(3);  // Set helmet level

    Gun akm;  // Create a Gun object for AKM
    akm.ammo = 100;  // Set ammo
    akm.damage = 60;  // Set damage
    akm.scope = 2;  // Set scope
    prakash.set_gun(akm);  // Assign the gun to Prakash

    Gun awm;  // Create a Gun object for AWM
    awm.ammo = 10;  // Set ammo
    awm.damage = 150;  // Set damage
    awm.scope = 8;  // Set scope
    rahul.set_gun(awm);  // Assign the gun to Rahul

    // Display details of Prakash
    cout << "Prakash's Age: " << prakash.get_age() << endl;
    cout << "Prakash's Score: " << prakash.get_score() << endl;
    cout << "Prakash's Health: " << prakash.get_health() << endl;
    cout << "Prakash's Status (Alive): " << prakash.get_Islive() << endl;

    // Display details of Rahul
    cout << "Rahul's Age: " << rahul.get_age() << endl;
    cout << "Rahul's Score: " << rahul.get_score() << endl;
    cout << "Rahul's Health: " << rahul.get_health() << endl;
    cout << "Rahul's Status (Alive): " << rahul.get_Islive() << endl;

    // Display total score of Prakash and Rahul
    cout << "Total Score of Prakash and Rahul: " << addscore(rahul, prakash) << endl;

    // Find and display the player with the maximum score
    player jondo = getmaxscore(prakash, rahul);
    cout << "Player with Max Score: " << jondo.get_score() << endl;

    // Display details of Prakash's gun
    Gun gun123 = prakash.get_gun();
    cout << "Prakash's Gun Damage: " << gun123.damage << endl;
    cout << "Prakash's Gun Scope: " << gun123.scope << endl;
    cout << "Prakash's Gun Ammo: " << gun123.ammo << endl;

    // Display helmet details of Rahul
    rahul.show_helmet();

    return 0;
}

