#include <iostream>
using namespace std;

class Employee {
private:
    static int employeeCount;  // Shared across all instances

public:
    Employee() {
        employeeCount++;
    }

    static int getEmployeeCount() {
        return employeeCount;
    }
};

// Initialize static data member
int Employee::employeeCount = 0;

int main() {
    Employee e1, e2, e3;

    cout << "Total number of employees: " << Employee::getEmployeeCount() << endl;
    return 0;
}
