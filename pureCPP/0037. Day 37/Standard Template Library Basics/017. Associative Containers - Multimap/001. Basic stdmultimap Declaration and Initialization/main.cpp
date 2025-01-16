#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> employees = {
        {1, "Alice"},
        {2, "Bob"},
        {1, "Charlie"}
    };

    for (const auto &pair : employees) {
        std::cout << "ID: " << pair.first << ", Name: " << pair.second << "\n";
    }
    return 0;
}
