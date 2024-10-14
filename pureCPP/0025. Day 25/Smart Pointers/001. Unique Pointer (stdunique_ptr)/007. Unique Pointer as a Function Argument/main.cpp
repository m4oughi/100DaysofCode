#include <iostream>
#include <memory>

void useUniquePtr(std::unique_ptr<int> ptr) {
    std::cout << "Using unique_ptr, value: " << *ptr << std::endl;
}

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(70);
    useUniquePtr(std::move(ptr));  // Passing ownership

    if (!ptr) {
        std::cout << "ptr is null after being moved to the function!" << std::endl;
    }

    return 0;
}
