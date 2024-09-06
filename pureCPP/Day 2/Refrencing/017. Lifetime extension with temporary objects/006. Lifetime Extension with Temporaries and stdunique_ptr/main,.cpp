#include <iostream>
#include <memory>

void process(const std::unique_ptr<int>& ptr) {
    std::cout << "Value: " << *ptr << std::endl;
}

int main() {
    process(std::make_unique<int>(42));  // Temporary std::unique_ptr

    return 0;
}
