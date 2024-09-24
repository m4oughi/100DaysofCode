#include <vector>
#include <iostream>
#include <functional>

int main() {
    int x = 10, y = 20, z = 30;
    std::vector<std::reference_wrapper<int>> refs = {x, y, z};

    for (auto& ref : refs) {  // auto& deduces that ref is an l-value reference to std::reference_wrapper<int>
        ref.get() += 10;  // Modify the referenced value
    }

    for (const auto& ref : refs) {
        std::cout << ref.get() << " ";  // Output: 20 30 40
    }
}
