#include <iostream>
#include <vector>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(std::string name, int age) : name(name), age(age) {}
};

int main() {
    std::vector<Person> people;

    // Use emplace to insert directly
    people.emplace_back("Alice", 30);
    people.emplace_back("Bob", 25);

    std::cout << "People in the vector:" << std::endl;
    for (const auto& person : people) {
        std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    }

    return 0;
}
