#include <iostream>
using namespace std;

class Person {
public:
    virtual void speak() { // Virtual function
        cout << "Person speaks." << endl;
    }
};

class Student : public Person {
public:
    void speak() override { // Override in derived class
        cout << "Student speaks." << endl;
    }
};

int main() {
    Person* personPtr;
    Student student;

    personPtr = &student;
    personPtr->speak(); // Calls overridden function in Student

    return 0;
}
