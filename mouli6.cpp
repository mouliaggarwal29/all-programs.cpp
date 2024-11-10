//Find the sum of two numbers , three numbers and four numbers with the help of function overloading.
#include <iostream>
using namespace std;

// Function to find the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

// Function to find the sum of three numbers
int sum(int a, int b, int c) {
    return a + b + c;
}

// Function to find the sum of four numbers
int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int num1, num2, num3, num4;

    // Input for two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum of two numbers: " << sum(num1, num2) << endl;

    // Input for three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum of three numbers: " << sum(num1, num2, num3) << endl;

    // Input for four numbers
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    cout << "Sum of four numbers: " << sum(num1, num2, num3, num4) << endl;

    return 0;
}