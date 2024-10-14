#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(10);  // Creating shared_ptr
    std::cout << "Value: " << *ptr1 << std::endl;
    return 0;
}
