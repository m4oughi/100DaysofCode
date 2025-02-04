#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> mm = {
        {1, "One"}, {2, "Two"}, {2, "Another Two"}, {3, "Three"}};

    auto range = mm.equal_range(2);
    mm.erase(range.first, range.second); // Erase all values for key 2

    for (const auto& [key, value] : mm) {
        std::cout << key << ": " << value << "\n";
    }

    return 0;
}
