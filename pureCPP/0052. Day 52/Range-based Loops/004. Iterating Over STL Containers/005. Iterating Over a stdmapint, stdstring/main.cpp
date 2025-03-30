#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    for (const auto& [id, name] : students) { // Structured binding (C++17)
        std::cout << "ID: " << id << ", Name: " << name << std::endl;
    }

    return 0;
}
