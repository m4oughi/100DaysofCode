#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    void display() {
        cout << "Person Name: " << name << endl;
    }
};

class Student : public Person { // Public inheritance
private:
    int studentID;

public:
    void setID(int id) {
        studentID = id;
    }

    void display() {
        cout << "Student Name: " << name << ", ID: " << studentID << endl; // Accessing protected member from base class
    }
};

int main() {
    Student student;
    student.setName("Sophia");
    student.setID(12345);
    student.display();
    return 0;
}
