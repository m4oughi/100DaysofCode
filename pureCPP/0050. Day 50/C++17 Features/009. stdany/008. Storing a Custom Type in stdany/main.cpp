#include <iostream>
#include <any>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::any data = Person{"Alice", 25};

    try {
        Person p = std::any_cast<Person>(data);
        std::cout << "Name: " << p.name << ", Age: " << p.age << '\n';
    } catch (const std::bad_any_cast& e) {
        std::cout << "Error: " << e.what() << '\n';
    }

    return 0;
}
