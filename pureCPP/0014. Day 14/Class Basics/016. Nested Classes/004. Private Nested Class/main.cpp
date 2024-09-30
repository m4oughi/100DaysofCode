#include <iostream>
using namespace std;

class Company {
private:
    class Employee {  // Private nested class
        string name;
        int id;
    public:
        Employee(string n, int i) : name(n), id(i) {}

        void display() const {
            cout << "Employee Name: " << name << ", ID: " << id << endl;
        }
    };

    Employee emp;
public:
    Company(string empName, int empID) : emp(empName, empID) {}

    void showEmployee() {
        emp.display();
    }
};

int main() {
    Company myCompany("Alice", 101);
    myCompany.showEmployee();

    return 0;
}
