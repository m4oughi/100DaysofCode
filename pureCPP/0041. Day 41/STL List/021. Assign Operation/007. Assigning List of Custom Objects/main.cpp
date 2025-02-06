#include <iostream>
#include <list>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}
};

int main() {
    std::list<Person> people;
    people.assign({{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}});

    std::cout << "List after assign:\n";
    for (const auto& person : people) 
        std::cout << person.name << " (" << person.age << ")\n";

    return 0;
}
