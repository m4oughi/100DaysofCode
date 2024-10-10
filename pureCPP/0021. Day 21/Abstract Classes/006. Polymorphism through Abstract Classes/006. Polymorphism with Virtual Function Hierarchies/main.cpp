#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() = 0;  // Pure virtual function
};

class Engineer : public Employee {
public:
    void work() override {
        cout << "Engineering work." << endl;
    }
};

class Manager : public Employee {
public:
    void work() override {
        cout << "Managing work." << endl;
    }
};

class SeniorManager : public Manager {
public:
    void work() override {
        cout << "Senior Manager overseeing operations." << endl;
    }
};

void employeeTask(Employee* employee) {
    employee->work();  // Polymorphic behavior across hierarchy levels
}

int main() {
    Engineer eng;
    Manager mgr;
    SeniorManager srMgr;

    employeeTask(&eng);    // Outputs "Engineering work."
    employeeTask(&mgr);    // Outputs "Managing work."
    employeeTask(&srMgr);  // Outputs "Senior Manager overseeing operations."

    return 0;
}
