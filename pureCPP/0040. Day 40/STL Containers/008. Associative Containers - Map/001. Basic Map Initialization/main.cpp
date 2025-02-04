#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> m = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    for (const auto& [key, value] : m) {
        std::cout << key << ": " << value << "\n";
    }

    return 0;
}
