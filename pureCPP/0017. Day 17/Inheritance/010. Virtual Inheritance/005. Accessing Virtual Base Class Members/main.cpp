#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {
        cout << "Person constructor called for " << name << endl;
    }

    ~Person() {
        cout << "Person destructor called for " << name << endl;
    }

    void introduce() {
        cout << "Hello, my name is " << name << "." << endl;
    }
};

// Intermediate class with virtual inheritance
class Employee : virtual public Person {
public:
    Employee(string n) : Person(n) {
        cout << "Employee constructor called for " << name << endl;
    }

    ~Employee() {
        cout << "Employee destructor called for " << name << endl;
    }
};

// Another intermediate class with virtual inheritance
class Student : virtual public Person {
public:
    Student(string n) : Person(n) {
        cout << "Student constructor called for " << name << endl;
    }

    ~Student() {
        cout << "Student destructor called for " << name << endl;
    }
};

// Derived class
class Intern : public Employee, public Student {
public:
    Intern(string n) : Person(n), Employee(n), Student(n) {
        cout << "Intern constructor called for " << name << endl;
    }

    ~Intern() {
        cout << "Intern destructor called for " << name << endl;
    }

    void whoAmI() {
        introduce();  // Accessing base class member
    }
};

int main() {
    Intern intern("Alice");
    intern.whoAmI();
    return 0;
}
