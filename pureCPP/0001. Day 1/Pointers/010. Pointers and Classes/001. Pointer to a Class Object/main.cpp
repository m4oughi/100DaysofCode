#include <iostream>

class Person {
public:
    std::string name;
    int age;
    
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person person = {"Alice", 30};
    Person* ptr = &person;

    ptr->display();  // Accessing member function using a pointer

    return 0;
}
