//Create a friend function for three classes A,B,C. Create  private and protected data members in class A,B and C. Access all the private and protected data with  the help of friend function.
#include <iostream>
#include <string>
using namespace std;

// Forward declaration of the friend function
void displayDetails(const class A& a, const class B& b, const class C& c);

class A {
private:
    int privateDataA;
protected:
    string protectedDataA;

public:
    A(int pData, string protData) : privateDataA(pData), protectedDataA(protData) {}

    // Declare the friend function
    friend void displayDetails(const A& a, const B& b, const C& c);
};

class B {
private:
    double privateDataB;
protected:
    string protectedDataB;

public:
    B(double pData, string protData) : privateDataB(pData), protectedDataB(protData) {}

    // Declare the friend function
    friend void displayDetails(const A& a, const B& b, const C& c);
};

class C {
private:
    char privateDataC;
protected:
    string protectedDataC;

public:
    C(char pData, string protData) : privateDataC(pData), protectedDataC(protData) {}

    // Declare the friend function
    friend void displayDetails(const A& a, const B& b, const C& c);
};

// Friend function definition
void displayDetails(const A& a, const B& b, const C& c) {
    cout << "Class A Private Data: " << a.privateDataA << endl;
    cout << "Class A Protected Data: " << a.protectedDataA << endl;

    cout << "Class B Private Data: " << b.privateDataB << endl;
    cout << "Class B Protected Data: " << b.protectedDataB << endl;

    cout << "Class C Private Data: " << c.privateDataC << endl;
    cout << "Class C Protected Data: " << c.protectedDataC << endl;
}

int main() {
    // Create objects of classes A, B, and C
    A a(10, "Protected A");
    B b(20.5, "Protected B");
    C c('Z', "Protected C");

    // Call the friend function to display details
    displayDetails(a, b, c);

    return 0;
}