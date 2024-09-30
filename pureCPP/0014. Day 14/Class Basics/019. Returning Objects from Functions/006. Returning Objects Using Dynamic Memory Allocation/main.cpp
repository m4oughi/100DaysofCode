#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id;

    Student(string n, int i) : name(n), id(i) {}

    void display() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

Student* createStudent(string name, int id) {
    Student *s = new Student(name, id);  // Dynamically allocating memory for the object
    return s;  // Returning a pointer to the object
}

int main() {
    Student *student1 = createStudent("John Doe", 101);
    student1->display();

    delete student1;  // Cleaning up the allocated memory
    return 0;
}
