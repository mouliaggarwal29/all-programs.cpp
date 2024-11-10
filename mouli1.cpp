//Create an inline function in student class to display the sum of two numbers.
#include <iostream>
using namespace std;

class Student {
public:
    // Inline function to display the sum of two numbers
    inline void displaySum(int a, int b) {
        cout << "The sum of " << a << " and " << b << " is: " << (a + b) << endl;
    }
};

int main() {
    Student student;
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the inline function to display the sum
    student.displaySum(num1, num2);

    return 0;
}