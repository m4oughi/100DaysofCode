#include <iostream>

struct Person {
    std::string* name;
    int* age;
};

int main() {
    Person person;
    person.name = new std::string("Eve");
    person.age = new int(28);

    std::cout << "Name: " << *(person.name) << std::endl;
    std::cout << "Age: " << *(person.age) << std::endl;

    delete person.name; // Free dynamically allocated string
    delete person.age;  // Free dynamically allocated integer

    return 0;
}
