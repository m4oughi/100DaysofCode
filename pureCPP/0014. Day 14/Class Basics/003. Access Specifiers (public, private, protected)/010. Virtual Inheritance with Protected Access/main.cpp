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

class Employee : virtual public Person { // Virtual inheritance
protected:
    int employeeID;

public:
    void setEmployeeID(int id) {
        employeeID = id;
    }
};

class Manager : public Employee {
public:
    void display() {
        cout << "Manager Name: " << name << ", Employee ID: " << employeeID << endl; // Accessing protected members
    }
};

int main() {
    Manager manager;
    manager.setName("Grace");
    manager.setEmployeeID(54321);
    manager.display();
    return 0;
}
