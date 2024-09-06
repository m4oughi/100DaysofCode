#include <iostream>
#include <memory>

void process(std::unique_ptr<int>& ptr) {
    auto& ref = *ptr;  // auto& deduces that ref is an l-value reference to the managed int
    ref += 20;  // Modify the integer managed by unique_ptr
}

int main() {
    auto ptr = std::make_unique<int>(50);
    process(ptr);  // Pass unique_ptr by reference
    std::cout << *ptr << std::endl;  // Output: 70
}
