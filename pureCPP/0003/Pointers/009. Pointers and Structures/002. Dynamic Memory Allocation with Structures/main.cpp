#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person* ptr = new Person{"Bob", 25};

    std::cout << "Name: " << ptr->name << std::endl;
    std::cout << "Age: " << ptr->age << std::endl;

    delete ptr; // Free dynamically allocated memory
    return 0;
}
