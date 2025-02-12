#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{10, "Alice"}, {20, "Bob"}, {30, "Charlie"}};

    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
