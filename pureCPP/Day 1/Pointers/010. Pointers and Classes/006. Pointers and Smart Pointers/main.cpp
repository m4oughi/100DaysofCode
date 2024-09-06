#include <iostream>
#include <memory>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    ~Person() {
        std::cout << "Destructor called for " << name << std::endl;
    }
};

int main() {
    std::unique_ptr<Person> ptr = std::make_unique<Person>("Frank", 40);

    ptr->display();  // Access member function

    // No need to delete; memory is automatically managed

    return 0;
}
