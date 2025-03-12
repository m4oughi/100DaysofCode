#include <iostream>

class Person {
    std::string name;
    int age;
public:
    Person() : Person("Unknown", 0) {} // Delegating constructor

    Person(std::string n, int a) : name(n), age(a) {} 

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person p1; // Uses delegating constructor
    Person p2("Alice", 25);

    p1.display();
    p2.display();

    return 0;
}
