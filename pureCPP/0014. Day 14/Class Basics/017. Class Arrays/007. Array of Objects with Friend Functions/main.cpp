#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n = "Unknown", int a = 0) : name(n), age(a) {}

    friend void showStudent(const Student &student);  // Friend function declaration
};

void showStudent(const Student &student) {  // Friend function definition
    cout << "Name: " << student.name << ", Age: " << student.age << endl;
}

int main() {
    Student students[3] = { Student("Alice", 20), Student("Bob", 21), Student("Charlie", 19) };

    for (int i = 0; i < 3; i++) {
        showStudent(students[i]);
    }

    return 0;
}
