#include <iostream>
#include <set>

int main() {
    std::set<std::pair<int, std::string>> pairSet = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto lb = pairSet.lower_bound({2, "Bob"});

    if (lb != pairSet.end()) {
        std::cout << "Lower bound: " << lb->first << " - " << lb->second << std::endl;
    }

    return 0;
}
