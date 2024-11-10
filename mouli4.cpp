//Create a friend class for three classes A,B,C. Access all private and protected data with the help of friend class.
#include <iostream>
using namespace std;

class A {
private:
    int privateDataA;
protected:
    int protectedDataA;

public:
    A(int pData, int protData) : privateDataA(pData), protectedDataA(protData) {}
    
    // Declare class B as a friend
    friend class B;
};

class B {
private:
    int privateDataB;
protected:
    int protectedDataB;

public:
    B(int pData, int protData) : privateDataB(pData), protectedDataB(protData) {}

    // Declare class C as a friend
    friend class C;

    // Function to display data from class A
    void displayA(const A& a) {
        cout << "Class A Private Data: " << a.privateDataA << endl;
        cout << "Class A Protected Data: " << a.protectedDataA << endl;
    }
};

class C {
private:
    int privateDataC;
protected:
    int protectedDataC;

public:
    C(int pData, int protData) : privateDataC(pData), protectedDataC(protData) {}

    // Function to display data from class B
    void displayB(const B& b) {
        cout << "Class B Private Data: " << b.privateDataB << endl;
        cout << "Class B Protected Data: " << b.protectedDataB << endl;
    }
};

int main() {
    A a(10, 20);  // Create an object of class A
    B b(30, 40);  // Create an object of class B
    C c(50, 60);  // Create an object of class C

    // Display data from class A using class B
    b.displayA(a);

    // Display data from class B using class C
    c.displayB(b);

    return 0;
} 