#include <iostream>
#include <set>

int main() {
    std::set<std::pair<int, std::string>> pairSet;

    pairSet.insert({1, "Alice"});
    pairSet.insert({2, "Bob"});
    pairSet.insert({1, "Alice"});  // Duplicate, won't be inserted

    std::cout << "Set of pairs: \n";
    for (const auto &p : pairSet) {
        std::cout << p.first << " - " << p.second << std::endl;
    }
    return 0;
}
