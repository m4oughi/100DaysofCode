#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student(string n, int roll) : name(n), rollNumber(roll) {}

    string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    // No setters for name and rollNumber, making them read-only after initialization
};

int main() {
    Student student("John", 101);
    cout << "Name: " << student.getName() << endl;
    cout << "Roll Number: " << student.getRollNumber() << endl;
    return 0;
}
