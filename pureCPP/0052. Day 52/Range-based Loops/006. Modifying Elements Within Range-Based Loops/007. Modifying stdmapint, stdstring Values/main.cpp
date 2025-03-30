#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    for (auto& pair : students) {
        pair.second += " (Updated)"; // Modify value
    }

    for (const auto& pair : students) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
