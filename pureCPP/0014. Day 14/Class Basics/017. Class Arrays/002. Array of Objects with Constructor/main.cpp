#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) : name(n), age(a) {}  // Parameterized Constructor

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student students[3] = { Student("Alice", 20), Student("Bob", 21), Student("Charlie", 19) };

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    return 0;
}
