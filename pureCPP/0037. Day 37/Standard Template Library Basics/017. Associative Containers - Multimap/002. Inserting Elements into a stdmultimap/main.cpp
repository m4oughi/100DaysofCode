#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> employees;
    employees.insert({1, "Alice"});
    employees.insert({2, "Bob"});
    employees.insert({1, "Charlie"});

    for (const auto &pair : employees) {
        std::cout << "ID: " << pair.first << ", Name: " << pair.second << "\n";
    }
    return 0;
}
