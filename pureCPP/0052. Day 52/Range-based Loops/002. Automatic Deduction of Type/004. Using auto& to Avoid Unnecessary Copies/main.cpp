#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};

    for (auto& name : names) { // `auto&` avoids copying
        name += "!";
    }

    for (const auto& name : names) {
        std::cout << name << " ";
    }

    return 0;
}
