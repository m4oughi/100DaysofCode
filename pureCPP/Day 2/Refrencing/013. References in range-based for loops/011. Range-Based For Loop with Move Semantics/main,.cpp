#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<std::unique_ptr<int>> vec;
    vec.push_back(std::make_unique<int>(10));
    vec.push_back(std::make_unique<int>(20));

    for (auto& ptr : vec) {  // auto& deduces that ptr is an l-value reference to std::unique_ptr<int>
        *ptr += 5;  // Modify the value pointed to by unique_ptr
    }

    for (const auto& ptr : vec) {
        std::cout << *ptr << " ";  // Output: 15 25
    }
}
