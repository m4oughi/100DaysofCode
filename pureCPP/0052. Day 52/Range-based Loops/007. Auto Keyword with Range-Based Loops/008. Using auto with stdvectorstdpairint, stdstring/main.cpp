#include <iostream>
#include <vector>

int main() {
    std::vector<std::pair<int, std::string>> employees = {{101, "Alice"}, {102, "Bob"}, {103, "Charlie"}};

    for (auto& [id, name] : employees) { // Structured binding with auto
        std::cout << "ID: " << id << ", Name: " << name << std::endl;
    }

    return 0;
}
