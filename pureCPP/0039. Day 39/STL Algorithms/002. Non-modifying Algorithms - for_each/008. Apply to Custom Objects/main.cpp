#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::vector<Person> people{
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 22}
    };

    std::for_each(people.begin(), people.end(), [](const Person &p) {
        std::cout << p.name << " is " << p.age << " years old.\n";
    });

    // Output:
    // Alice is 25 years old.
    // Bob is 30 years old.
    // Charlie is 22 years old.
}
