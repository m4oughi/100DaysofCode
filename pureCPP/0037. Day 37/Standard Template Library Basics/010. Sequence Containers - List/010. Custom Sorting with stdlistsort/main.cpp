#include <iostream>
#include <list>
#include <string>

struct Person {
    std::string name;
    int age;
};

bool compareByAge(const Person &a, const Person &b) {
    return a.age < b.age;
}

int main() {
    std::list<Person> people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};
    
    people.sort(compareByAge); // Sort by age in ascending order

    for (const auto &p : people) {
        std::cout << p.name << ": " << p.age << "\n";
    }
    return 0;
}
