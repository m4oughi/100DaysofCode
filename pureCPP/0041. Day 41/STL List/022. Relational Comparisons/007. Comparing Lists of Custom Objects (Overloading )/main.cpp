#include <iostream>
#include <list>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}

    // Overload < operator for lexicographical comparison
    bool operator<(const Person& other) const {
        return age < other.age; // Compare by age
    }
};

int main() {
    std::list<Person> group1 = {{"Alice", 30}, {"Bob", 25}};
    std::list<Person> group2 = {{"Alice", 30}, {"Charlie", 20}};

    if (group1 < group2)
        std::cout << "group1 is smaller than group2 (based on age comparison)\n";
    else
        std::cout << "group1 is not smaller than group2\n";

    return 0;
}
