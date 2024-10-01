#include <iostream>

class Person {
private:
    std::string name;
    int age;
public:
    // Using member initialization list
    Person(std::string n, int a) : name(n), age(a) {
        std::cout << name << " is " << age << " years old." << std::endl;
    }
};

int main() {
    Person p1("Alice", 30);
    return 0;
}
