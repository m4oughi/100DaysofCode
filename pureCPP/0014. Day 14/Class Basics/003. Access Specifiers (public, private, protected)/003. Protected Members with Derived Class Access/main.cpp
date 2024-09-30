#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
public:
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl; // Accessing protected members in derived class
    }
};

int main() {
    Student student;
    student.setDetails("Charlie", 20);
    student.display();
    return 0;
}
