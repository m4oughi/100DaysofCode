#include <iostream>
#include <memory>

class Container {
    std::unique_ptr<int> data;
public:
    Container() : data(std::make_unique<int>(600)) {}
    std::unique_ptr<int>& getData() { return data; }
};

int main() {
    Container container;
    auto& dataPtr = container.getData();  // Reference to smart pointer

    dataPtr.reset();  // Reset the smart pointer, reference becomes dangling

    std::cout << "Dangling Reference: " << *dataPtr << std::endl;  // Undefined behavior

    return 0;
}
