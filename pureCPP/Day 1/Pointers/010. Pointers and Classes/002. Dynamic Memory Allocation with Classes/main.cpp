#include <iostream>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person* ptr = new Person("Bob", 25);  // Dynamically allocate a Person object

    ptr->display();  // Access member function

    delete ptr;  // Free dynamically allocated memory

    return 0;
}
