#include <iostream>
#include <list>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {
        std::cout << "Person " << name << " constructed\n";
    }
};

int main() {
    std::list<Person> people;

    people.emplace_back("Alice", 30);
    people.emplace_front("Bob", 25);
    auto it = people.begin();
    std::advance(it, 1);
    people.emplace(it, "Charlie", 28);  // Insert Charlie in the middle

    std::cout << "List of people:\n";
    for (const auto& p : people)
        std::cout << p.name << " (" << p.age << " years old)\n";

    return 0;
}
