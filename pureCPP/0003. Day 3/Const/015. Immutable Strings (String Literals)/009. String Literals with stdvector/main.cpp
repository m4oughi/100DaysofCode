#include <iostream>
#include <vector>

int main() {
    std::vector<const char*> strings = {"One", "Two", "Three"};

    for (const auto& s : strings) {
        std::cout << s << std::endl; // Prints "One" "Two" "Three"
    }
}
