#include <iostream>
#include <list>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::list<Person> list1 = {{"Alice", 30}, {"Bob", 25}};
    std::list<Person> list2 = {{"Charlie", 35}, {"David", 28}};

    list1.splice(list1.end(), list2); // Move all elements

    std::cout << "List1 after splicing:\n";
    for (const auto& p : list1) std::cout << p.name << " (" << p.age << ")\n";
    return 0;
}
