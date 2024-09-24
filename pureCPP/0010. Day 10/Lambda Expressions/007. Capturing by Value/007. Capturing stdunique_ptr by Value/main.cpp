#include <iostream>
#include <memory>

int main() {
    auto ptr = std::make_unique<int>(10);
    auto captureUniquePtr = [ptr = std::move(ptr)]() {
        std::cout << "Captured unique_ptr value: " << *ptr << std::endl;
    };

    captureUniquePtr(); // Outputs: Captured unique_ptr value: 10
    // ptr is now null in the outer scope due to move capture
    return 0;
}
