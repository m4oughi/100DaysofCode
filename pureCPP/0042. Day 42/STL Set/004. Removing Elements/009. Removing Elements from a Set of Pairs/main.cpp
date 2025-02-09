#include <iostream>
#include <set>

int main() {
    std::set<std::pair<int, std::string>> pairSet = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    pairSet.erase({2, "Bob"}); // Removes the pair (2, "Bob")

    std::cout << "Set of pairs after removal: \n";
    for (const auto &p : pairSet) {
        std::cout << p.first << " - " << p.second << std::endl;
    }
    return 0;
}
