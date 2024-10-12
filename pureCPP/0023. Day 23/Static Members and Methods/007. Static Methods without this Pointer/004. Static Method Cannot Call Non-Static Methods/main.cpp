#include <iostream>
using namespace std;

class Employee {
public:
    string name;

    void display() {  // Non-static method
        cout << "Employee name: " << name << endl;
    }

    static void show() {
        // display();  // ERROR: Cannot call non-static method inside static method
        cout << "Static method cannot call non-static methods." << endl;
    }
};

int main() {
    Employee::show();  // Access static method via class name
    return 0;
}
