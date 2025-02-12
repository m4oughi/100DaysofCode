#include <iostream>
#include <map>

int main() {
    std::map<int, std::string, std::greater<int>> students = {{3, "Alice"}, {1, "Bob"}, {2, "Charlie"}};

    for (const auto& [key, value] : students) {
        std::cout << key << " -> " << value << "\n";
    }

    return 0;
}
