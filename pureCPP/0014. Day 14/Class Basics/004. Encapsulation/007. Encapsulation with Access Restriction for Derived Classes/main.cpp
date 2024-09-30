#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        if (a > 0) {
            name = n;
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }
};

class Employee : public Person {
private:
    double salary;

public:
    void setSalary(double s) {
        if (s >= 0) {
            salary = s;
        } else {
            cout << "Invalid salary!" << endl;
        }
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setDetails("Alice", 30);
    emp.setSalary(5000);
    emp.display();
    return 0;
}
