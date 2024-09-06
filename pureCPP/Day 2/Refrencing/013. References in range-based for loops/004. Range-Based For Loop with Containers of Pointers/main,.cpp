#include <vector>
#include <iostream>

int main() {
    std::vector<int*> ptrs;
    int a = 10, b = 20, c = 30;
    ptrs.push_back(&a);
    ptrs.push_back(&b);
    ptrs.push_back(&c);

    for (auto& ptr : ptrs) {  // auto& deduces that ptr is an l-value reference to int*
        *ptr += 5;  // Modify the value pointed to by ptr
    }

    for (const auto& ptr : ptrs) {
        std::cout << *ptr << " ";  // Output: 15 25 35
    }
}
