#include <iostream>
#include <memory>
#include <vector>

class Person {
public:
    Person(std::string name) : name(name) {}
    void show() const { std::cout << "Person: " << name << std::endl; }
private:
    std::string name;
};

int main() {
    std::vector<std::unique_ptr<Person>> people;
    
    people.push_back(std::make_unique<Person>("Alice"));
    people.push_back(std::make_unique<Person>("Bob"));

    for (const auto& person : people) {
        person->show(); // Output: Person: Alice | Person: Bob
    }

    return 0;
}
