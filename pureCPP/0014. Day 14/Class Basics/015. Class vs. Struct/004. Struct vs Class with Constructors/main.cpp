#include <iostream>
using namespace std;

struct StudentStruct {
    string name;
    int age;

    // Struct constructor
    StudentStruct(string n, int a) : name(n), age(a) {}
};

class StudentClass {
    string name;
    int age;
public:
    // Class constructor
    StudentClass(string n, int a) : name(n), age(a) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    StudentStruct ss("Alex", 20);
    cout << "Struct Student - Name: " << ss.name << ", Age: " << ss.age << endl;

    StudentClass sc("Emily", 22);
    sc.display();

    return 0;
}
