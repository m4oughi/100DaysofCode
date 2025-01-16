#include <iostream>
#include <utility>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::pair<int, Person> p(1, {"Alice", 30});

    std::cout << "ID: " << p.first << "\n";
    std::cout << "Name: " << p.second.name << "\n";
    std::cout << "Age: " << p.second.age << "\n";

    return 0;
}
