#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person person = {"Alice", 30};
    Person* ptr = &person;

    std::cout << "Name: " << ptr->name << std::endl;
    std::cout << "Age: " << ptr->age << std::endl;

    return 0;
}
