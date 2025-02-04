#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> mm;

    mm.insert({1, "One"});
    mm.insert({2, "Two"});
    mm.insert({2, "Another Two"}); // Duplicate key allowed

    for (const auto& [key, value] : mm) {
        std::cout << key << ": " << value << "\n";
    }

    return 0;
}
