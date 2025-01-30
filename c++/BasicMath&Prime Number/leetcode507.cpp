#include<iostream>
#include<cmath>
using namespace std;

// Function to check if a number 'num' is a perfect number
bool checkPerfectNumber(int num) {
    int sum = 0;  // Initialize sum to store the sum of divisors

    // First loop: Iterate from 1 to the square root of 'num'
    for (int i = 1; i < sqrt(num); i++) {
        if (num % i == 0)  // If 'i' is a divisor of 'num'
            sum += i;  // Add 'i' to the sum
    }

    // Second loop: Iterate from the square root of 'num' down to 1
    for (int i = sqrt(num); i > 1; i--) {
        if (num % i == 0)  // If 'i' is a divisor of 'num'
            sum += (num / i);  // Add the corresponding divisor 'num/i' to the sum
    }

    // A perfect number is equal to the sum of its proper divisors (excluding itself)
    return (sum == num);
}

int main()
{ 
    int n;
    cin >> n;  // Input the number 'n'
    
    // Output 1 (true) if 'n' is a perfect number, otherwise 0 (false)
    cout << checkPerfectNumber(n);
}
