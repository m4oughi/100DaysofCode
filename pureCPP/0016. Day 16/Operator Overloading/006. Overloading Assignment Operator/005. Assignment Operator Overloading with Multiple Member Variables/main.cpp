#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}

    Person& operator=(const Person& other) {
        if (this == &other) return *this;  // Self-assignment check

        name = other.name;
        age = other.age;
        return *this;
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("Alice", 30), p2("Bob", 25);
    p2 = p1;  // Assignment
    p2.display();  // Output: Name: Alice, Age: 30
    return 0;
}
