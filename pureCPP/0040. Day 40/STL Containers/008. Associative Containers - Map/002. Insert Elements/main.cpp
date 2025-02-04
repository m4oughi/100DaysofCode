#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> m;

    m.insert({1, "One"});
    m.insert({2, "Two"});
    m[3] = "Three"; // Alternate syntax

    for (const auto& [key, value] : m) {
        std::cout << key << ": " << value << "\n";
    }

    return 0;
}
