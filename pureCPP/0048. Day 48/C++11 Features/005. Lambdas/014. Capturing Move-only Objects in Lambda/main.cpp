#include <iostream>
#include <memory>

int main() {
    auto uniquePtr = std::make_unique<int>(42);

    auto lambda = [ptr = std::move(uniquePtr)]() {
        std::cout << "Value: " << *ptr << std::endl;
    };

    lambda();

    return 0;
}
