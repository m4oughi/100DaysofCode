#include <iostream>
#include <list>

class Person {
public:
    std::string name;
    Person(std::string n) : name(n) {}
};

int main() {
    std::list<Person> people = {Person("Alice"), Person("Bob"), Person("Charlie")};

    std::cout << "List size before clear: " << people.size() << std::endl;
    people.clear();
    std::cout << "List size after clear: " << people.size() << std::endl;

    return 0;
}
