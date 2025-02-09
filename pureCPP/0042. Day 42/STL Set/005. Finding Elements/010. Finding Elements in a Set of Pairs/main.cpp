#include <iostream>
#include <set>

int main() {
    std::set<std::pair<int, std::string>> pairSet = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto it = pairSet.find({2, "Bob"});
    if (it != pairSet.end()) {
        std::cout << "Pair found: " << it->first << " - " << it->second << std::endl;
    } else {
        std::cout << "Pair not found.\n";
    }
    return 0;
}
