#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> employees = {{1, "Alice"}, {2, "Bob"}, {1, "Charlie"}};

    for (auto it = employees.begin(); it != employees.end(); ++it) {
        std::cout << "ID: " << it->first << ", Name: " << it->second << "\n";
    }
    return 0;
}
