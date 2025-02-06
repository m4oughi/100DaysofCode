#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> firstNames = {"Alice", "Bob"};
    std::list<std::string> lastNames = {"Johnson", "Smith"};

    firstNames.swap(lastNames);

    std::cout << "First Names List: ";
    for (const auto& name : firstNames) std::cout << name << " ";

    std::cout << "\nLast Names List: ";
    for (const auto& name : lastNames) std::cout << name << " ";

    return 0;
}
