#include <iostream>
using namespace std;

// Abstract Base Class
class Employee {
public:
    virtual void work() = 0;  // Pure virtual function
};

class Developer : public Employee {
public:
    void work() override {
        cout << "Developer is writing code." << endl;
    }
};

class Manager : public Employee {
public:
    void work() override {
        cout << "Manager is overseeing the team." << endl;
    }
};

class SeniorManager : public Manager {
public:
    void work() override {
        cout << "Senior Manager is making strategic decisions." << endl;
    }
};

int main() {
    Employee* employee1 = new Developer();
    Employee* employee2 = new SeniorManager();

    employee1->work();  // Outputs "Developer is writing code."
    employee2->work();  // Outputs "Senior Manager is making strategic decisions."

    delete employee1;
    delete employee2;

    return 0;
}
