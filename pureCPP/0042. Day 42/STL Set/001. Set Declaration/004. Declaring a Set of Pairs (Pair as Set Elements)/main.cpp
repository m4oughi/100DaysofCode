#include <iostream>
#include <set>

int main() {
    std::set<std::pair<int, std::string>> pairSet = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    std::cout << "Set of pairs: \n";
    for (const auto &p : pairSet) {
        std::cout << p.first << " - " << p.second << std::endl;
    }
    return 0;
}
