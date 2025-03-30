#include <iostream>
#include <set>

int main() {
    std::set<std::string> words = {"apple", "banana", "cherry"};

    for (const auto& word : words) { // Read-only access with const auto&
        std::cout << word << " ";
    }

    return 0;
}
