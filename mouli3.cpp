//Create a friend function to display student details in student class and class containing data members are name , age , department ,course.
#include <iostream>
#include <string>
using namespace std;

// Forward declaration of the friend function
void displayStudentDetails(const class Student& student);

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    // Constructor to initialize student details
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}

    // Declare the friend function
    friend void displayStudentDetails(const Student& student);
};

// Friend function definition
void displayStudentDetails(const Student& student) {
    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    // Create a Student object
    Student student("John Doe", 20, "Computer Science", "Software Engineering");

    // Call the friend function to display student details
    displayStudentDetails(student);

    return 0;
}