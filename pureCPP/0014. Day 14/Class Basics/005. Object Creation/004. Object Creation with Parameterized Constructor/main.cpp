#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    Student(string n, int roll) {  // Parameterized constructor
        name = n;
        rollNumber = roll;
    }

    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student student("John", 101);  // Creating object with parameterized constructor
    student.display();
    return 0;
}
