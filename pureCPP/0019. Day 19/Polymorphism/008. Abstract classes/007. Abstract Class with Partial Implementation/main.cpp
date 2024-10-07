#include <iostream>
using namespace std;

class Employee {
public:
    void details() {  // Partial implementation
        cout << "Name: John Doe" << endl;
    }

    virtual void work() = 0;  // Pure virtual function
};

class Programmer : public Employee {
public:
    void work() override {
        cout << "Writing code" << endl;
    }
};

int main() {
    Programmer programmer;
    programmer.details();  // Calls base class partial implementation
    programmer.work();     // Calls Programmer's implementation

    return 0;
}
