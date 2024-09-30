#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n = "Unknown", int a = 0) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student* students = new Student[n];  // Dynamically allocated array of objects

    for (int i = 0; i < n; i++) {
        cout << "Enter name and age for student " << i + 1 << ": ";
        cin >> students[i].name >> students[i].age;
    }

    cout << "\nDisplaying student information:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    delete[] students;  // Deallocate dynamic memory

    return 0;
}
