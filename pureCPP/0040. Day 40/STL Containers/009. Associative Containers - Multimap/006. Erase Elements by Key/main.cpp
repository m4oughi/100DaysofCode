#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> mm = {
        {1, "One"}, {2, "Two"}, {2, "Another Two"}};

    mm.erase(2); // Erase all entries with key 2

    for (const auto& [key, value] : mm) {
        std::cout << key << ": " << value << "\n";
    }

    return 0;
}
