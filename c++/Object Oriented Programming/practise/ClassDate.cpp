// Q1. Create a class ‘date’ that contains three members namely date, month and year. Create 2 objects of this
// class with different dates and now compare the two. If the dates are equal then display
// message as "Equal"otherwise "Unequal". Use Getters & Setters. *Note : The function should be a member function of this class.
#include<iostream>
#include<vector>
using namespace std;

class Date {
  private:
    int date;
    string month;
    int year;

  public:
    // Constructor
    Date(int d, string m, int y) {
        date = d;
        month = m;
        year = y;
    }

    // Setters
    void set_date(int date) {
        this->date = date;
    }
    
    void set_month(string month) {
        this->month = month;
    }
    
    void set_year(int year) {
        this->year = year;
    }

    // Getters
    int Get_date() {
        return date;
    }
    
    string Get_month() {
        return month;
    }
    
    int Get_year() {
        return year;
    }

    // Method to compare two Date objects
    void compare_date(const Date &obj) {
        if(date == obj.date && month == obj.month && year == obj.year) {
            cout << "Equal";
        } else {
            cout << "Not Equal";
        }
    }
};

int main() {
    Date d1(16, "June", 2005);
    Date d2(16, "June", 2005);

    cout << "Comparing Date 1 and Date 2 :-> ";
    d1.compare_date(d2);

    return 0;
}
