#include <iostream>
#include <memory>

int main() {
    auto ptr = std::make_unique<int>(42);

    auto showValue = [p = std::move(ptr)]() {
        std::cout << "Value: " << *p << std::endl;
    };

    showValue();
    // ptr is now null due to std::move
    return 0;
}
