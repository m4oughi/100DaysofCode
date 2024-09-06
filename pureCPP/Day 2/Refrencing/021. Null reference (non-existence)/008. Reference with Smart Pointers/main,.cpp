#include <iostream>
#include <memory>

void process(const std::shared_ptr<int>& ptr) {
    if (ptr) {
        std::cout << "Shared pointer value: " << *ptr << std::endl;
    } else {
        std::cout << "Shared pointer is null." << std::endl;
    }
}

int main() {
    std::shared_ptr<int> smartPtr = nullptr;
    process(smartPtr);  // Shared pointer is null

    return 0;
}
