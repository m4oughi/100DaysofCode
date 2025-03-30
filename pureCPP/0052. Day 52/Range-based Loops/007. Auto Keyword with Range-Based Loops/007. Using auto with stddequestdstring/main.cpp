#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> names = {"John", "Alice", "Bob"};

    for (auto& name : names) {
        name += " Doe"; // Modify each name
    }

    for (const auto& name : names) {
        std::cout << name << " ";
    }

    return 0;
}
