#include <iostream>

class Person {
public:
    // Constructor with default parameters
    Person(std::string name = "Unknown", int age = 18)
        : name(name), age(age) {}

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    Person p1;                   // Uses both default values
    Person p2("Alice");           // Uses default age
    Person p3("Bob", 25);         // No defaults used
    p1.display();
    p2.display();
    p3.display();
    return 0;
}