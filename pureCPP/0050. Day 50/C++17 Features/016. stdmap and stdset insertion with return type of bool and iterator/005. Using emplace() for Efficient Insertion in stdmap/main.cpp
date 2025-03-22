#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> employees;

    auto [it, success] = employees.emplace(105, "David");

    if (success) {
        std::cout << "Inserted: " << it->first << " - " << it->second << "\n";
    } else {
        std::cout << "Insertion failed, key already exists!\n";
    }

    return 0;
}
