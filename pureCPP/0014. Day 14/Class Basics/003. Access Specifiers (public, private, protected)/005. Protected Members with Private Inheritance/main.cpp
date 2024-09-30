#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : private Person { // Private inheritance
public:
    void setStudentDetails(string n, int a) {
        setDetails(n, a); // Accessing protected members via base class method
    }

    void display() {
        cout << "Student Name: " << name << ", Age: " << age << endl; // Accessible due to protected inheritance
    }
};

int main() {
    Student student;
    student.setStudentDetails("Emma", 21);
    student.display();
    return 0;
}
