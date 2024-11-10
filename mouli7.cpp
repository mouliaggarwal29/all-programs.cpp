//Find the sum of three nos. with the help of function overriding. Display sum of base class with the help of derived class object and vice versa.
#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Function to find the sum of three numbers
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

// Derived class
class Derived : public Base {
public:
    // Overriding the sum function
    int sum(int a, int b, int c) override {
        return a + b + c + 10; // Adding an extra 10 for demonstration
    }
};

int main() {
    Base baseObj;          // Object of base class
    Derived derivedObj;    // Object of derived class

    // Using base class object to call the sum function
    cout << "Sum using Base class: " << baseObj.sum(1, 2, 3) << endl; // 1 + 2 + 3 = 6

    // Using derived class object to call the overridden sum function
    cout << "Sum using Derived class: " << derivedObj.sum(1, 2, 3) << endl; // 1 + 2 + 3 + 10 = 16

    // Demonstrating base class function call using derived class object
    Base* basePtr = &derivedObj; // Base class pointer pointing to derived class object
    cout << "Sum using Base class function from Derived class object: " << basePtr->sum(1, 2, 3) << endl; // 1 + 2 + 3 = 6

    return 0;
}