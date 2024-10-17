#include <iostream>
#include <memory>
#include <utility>

void process(std::unique_ptr<int>& ptr) {
    std::cout << "Lvalue unique_ptr" << std::endl;
}

void process(std::unique_ptr<int>&& ptr) {
    std::cout << "Rvalue unique_ptr" << std::endl;
}

template <typename T>
void forwardUniquePtr(T&& ptr) {
    process(std::forward<T>(ptr));  // Perfect forwarding for unique_ptr
}

int main() {
    std::unique_ptr<int> ptr1 = std::make_unique<int>(100);
    forwardUniquePtr(ptr1);        // Lvalue forwarding
    forwardUniquePtr(std::move(ptr1));  // Rvalue forwarding
}
