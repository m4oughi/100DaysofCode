export module person;
#include <string>
#include <iostream>

export class Person {
private:
    std::string name;
    int age;
public:
    Person(std::string n, int a) : name(n), age(a) {}

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
};
