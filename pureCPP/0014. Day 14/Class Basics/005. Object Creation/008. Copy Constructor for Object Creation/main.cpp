#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}

    // Copy constructor
    Person(const Person& p) {
        name = p.name;
        age = p.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person1("Alice", 25);
    Person person2 = person1;  // Creating object using copy constructor

    person2.display();
    return 0;
}
