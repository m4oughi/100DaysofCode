#include <iostream>
using namespace std;

class Employee {
public:
    string name;

    Employee(string n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }

    ~Employee() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Employee Name: " << name << endl;
    }
};

int main() {
    // Dynamically allocate an array of Employee objects
    Employee* employees = new Employee[3] { 
        Employee("John"), 
        Employee("Alice"), 
        Employee("Bob") 
    };

    for (int i = 0; i < 3; ++i) {
        employees[i].display();
    }

    // Deallocate memory
    delete[] employees;

    return 0;
}
