#include <iostream>
#include <memory>

void display(std::unique_ptr<int> ptr) {
    std::cout << "Value in function: " << *ptr << std::endl;
}

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(30);

    // Ownership of ptr is transferred to the display function
    display(std::move(ptr)); 

    // ptr is now empty after transfer
    if (!ptr) {
        std::cout << "Pointer is now null." << std::endl;
    }

    return 0;
}
