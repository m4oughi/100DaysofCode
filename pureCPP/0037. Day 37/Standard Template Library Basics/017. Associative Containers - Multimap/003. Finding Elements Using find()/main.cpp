#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> employees = {{1, "Alice"}, {2, "Bob"}, {1, "Charlie"}};

    auto it = employees.find(1);
    if (it != employees.end()) {
        std::cout << "First employee with ID 1: " << it->second << "\n";
    } else {
        std::cout << "ID not found\n";
    }
    return 0;
}
