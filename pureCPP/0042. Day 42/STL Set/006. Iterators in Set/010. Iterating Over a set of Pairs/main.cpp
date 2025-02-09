#include <iostream>
#include <set>

int main() {
    std::set<std::pair<int, std::string>> pairSet = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    std::cout << "Set of pairs: \n";
    for (auto it = pairSet.begin(); it != pairSet.end(); ++it) {
        std::cout << it->first << " - " << it->second << std::endl;
    }
    return 0;
}
