#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    static int totalStudents;  // Static data member

    Student(string n, int a) : name(n), age(a) {
        totalStudents++;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    static void showTotal() {
        cout << "Total students: " << totalStudents << endl;
    }
};

int Student::totalStudents = 0;  // Initialize static data member

int main() {
    Student students[3] = { Student("Alice", 20), Student("Bob", 21), Student("Charlie", 19) };

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    Student::showTotal();  // Display total number of students

    return 0;
}
