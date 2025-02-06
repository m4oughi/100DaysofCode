#include <iostream>
#include <list>

class Person {
public:
    std::string name;
    int age;
    Person(std::string n, int a) : name(n), age(a) {}
};

int main() {
    std::list<Person> people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};

    auto it = people.begin();
    std::advance(it, 1); // Move to second element
    people.erase(it); // Erase "Bob"

    std::cout << "People list after erase:\n";
    for (const auto& p : people) {
        std::cout << p.name << " (" << p.age << ")\n";
    }

    return 0;
}
