#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> data = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"}
    };

    for (const auto& pair : data) { // ✅ Works with structured binding
        std::cout << pair.first << " -> " << pair.second << std::endl;
    }

    return 0;
}
