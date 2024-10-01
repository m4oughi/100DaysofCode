#include <iostream>

class Person {
private:
    std::string name;
    int age;
public:
    // Delegating constructor
    Person() : Person("Unknown", 0) {
        std::cout << "Default constructor called." << std::endl;
    }
    
    // Primary constructor
    Person(std::string n, int a) : name(n), age(a) {
        std::cout << "Parameterized constructor called for " << name << ", age " << age << "." << std::endl;
    }
    
    void display() const {
        std::cout << name << " is " << age << " years old." << std::endl;
    }
};

int main() {
    Person p1;          // Calls delegating constructor
    p1.display();

    Person p2("John", 25); // Calls primary constructor
    p2.display();

    return 0;
}
