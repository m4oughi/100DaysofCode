#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> data = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    for (const auto& [key, value] : data) { // C++17 Structured Bindings
        std::cout << key << " -> " << value << std::endl;
    }

    return 0;
}
