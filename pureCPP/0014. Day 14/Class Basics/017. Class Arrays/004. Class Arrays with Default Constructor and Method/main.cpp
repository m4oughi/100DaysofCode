#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() : name("Unknown"), age(0) {}  // Default Constructor

    void setValues(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student students[3];  // Array of Student objects initialized by the default constructor

    students[0].setValues("Alice", 20);
    students[1].setValues("Bob", 21);
    students[2].setValues("Charlie", 19);

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    return 0;
}
