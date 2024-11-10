//Create a friend class to check if a number is prime or not.
#include <iostream>
using namespace std;

class PrimeChecker; // Forward declaration of the PrimeChecker class

class Number {
private:
    int num;

public:
    // Constructor to initialize the number
    Number(int n) : num(n) {}

    // Friend class declaration
    friend class PrimeChecker;
};

class PrimeChecker {
public:
    // Function to check if the number is prime
    bool isPrime(Number n) {
        if (n.num <= 1) return false; // Numbers less than or equal to 1 are not prime
        for (int i = 2; i <= n.num / 2; ++i) {
            if (n.num % i == 0) {
                return false; // If divisible by any number other than 1 and itself
            }
        }
        return true; // The number is prime
    }

    // Function to display the result
    void displayResult(Number n) {
        if (isPrime(n)) {
            cout << n.num << " is a prime number." << endl;
        } else {
            cout << n.num << " is not a prime number." << endl;
        }
    }
};

int main() {
    int number;

    // Input a number from the user
    cout << "Enter a number to check if it is prime: ";
    cin >> number;

    // Create an object of Number class
    Number num(number);

    // Create an object of PrimeChecker class
    PrimeChecker checker;

    // Display the result
    checker.displayResult(num);

    return 0;
}