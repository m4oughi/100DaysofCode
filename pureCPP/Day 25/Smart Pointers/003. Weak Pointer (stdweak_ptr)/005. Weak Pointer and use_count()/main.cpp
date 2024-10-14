#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(60);
    std::weak_ptr<int> weakPtr1 = sharedPtr;
    std::weak_ptr<int> weakPtr2 = sharedPtr;

    std::cout << "Shared pointer count: " << sharedPtr.use_count() << std::endl; // Reference count

    weakPtr1.reset();  // Reset weakPtr1

    std::cout << "Shared pointer count after weakPtr1 reset: " << sharedPtr.use_count() << std::endl;

    return 0;
}
