#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> uptr = nullptr; // Explicitly initializing smart pointer to null

    if (!uptr) {
        std::cout << "Smart pointer is empty (nullptr)." << std::endl;
    }

    return 0;
}
