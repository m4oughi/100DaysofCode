#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<int, std::string> ummap = {
        {1, "One"}, {1, "First"}, {2, "Two"}
    };

    auto range = ummap.equal_range(1);

    std::cout << "Values for key 1:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second << "\n";
    }

    return 0;
}
