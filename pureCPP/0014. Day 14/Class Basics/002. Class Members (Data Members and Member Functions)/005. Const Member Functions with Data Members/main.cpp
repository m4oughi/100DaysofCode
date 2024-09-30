#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void display() const { // Const member function
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    const Person person("John", 35);
    person.display(); // Const object can only call const member functions
    return 0;
}
