#include <iostream>
#include <list>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n = "Unknown", int a = 0) : name(n), age(a) {}
};

int main() {
    std::list<Person> people = {{"Alice", 30}, {"Bob", 25}};

    people.resize(4, Person("Default", 18));  // Resize with default person

    std::cout << "List of people:\n";
    for (const auto& p : people)
        std::cout << p.name << " (" << p.age << " years old)\n";

    return 0;
}
