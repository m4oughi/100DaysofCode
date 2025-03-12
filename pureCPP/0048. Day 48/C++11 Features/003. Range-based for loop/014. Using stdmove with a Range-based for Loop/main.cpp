#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};

    for (auto&& name : std::move(names)) {
        std::cout << name << " ";
    }

    return 0;
}
