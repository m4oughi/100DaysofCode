#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {3, 1, 4};

    for (const auto& value : mySet) {  // const auto& deduces that value is a const l-value reference
        std::cout << value << " ";  // Output: 1 3 4 (elements are in sorted order)
    }
}
