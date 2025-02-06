#include <iostream>
#include <list>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}

    bool operator<(const Person& other) const {
        return age < other.age;  // Sort by age
    }
};

int main() {
    std::list<Person> list1 = {{"Alice", 30}, {"Bob", 25}};
    std::list<Person> list2 = {{"Charlie", 35}, {"David", 28}};

    list1.merge(list2);  // Uses operator< to merge by age

    std::cout << "Merged list of people by age:\n";
    for (const auto& person : list1) 
        std::cout << person.name << " (" << person.age << ")\n";

    return 0;
}
