#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

class Student : protected Person { // Protected inheritance
public:
    void setStudentName(string n) {
        setName(n); // Accessible within derived class
    }

    void display() {
        cout << "Student Name: " << name << endl; // Accessible within derived class
    }
};

int main() {
    Student student;
    student.setStudentName("James");
    student.display();
    // student.setName("Not Allowed"); // Error: setName() is not accessible here
    return 0;
}
