#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<int, std::string> ummap = {
        {1, "One"}, {2, "Two"}, {1, "First"}
    };

    if (ummap.count(1) > 0) {
        std::cout << "Key 1 exists with " << ummap.count(1) << " values.\n";
    }

    if (ummap.find(3) == ummap.end()) {
        std::cout << "Key 3 does not exist.\n";
    }

    return 0;
}
