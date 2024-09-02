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
    Person* people[2];  // Array of pointers to Person objects

    people[0] = new Person("Charlie", 22);
    people[1] = new Person("Diana", 29);

    for (int i = 0; i < 2; ++i) {
        people[i]->display();  // Access member function using each pointer
        delete people[i];  // Free dynamically allocated memory
    }

    return 0;
}
