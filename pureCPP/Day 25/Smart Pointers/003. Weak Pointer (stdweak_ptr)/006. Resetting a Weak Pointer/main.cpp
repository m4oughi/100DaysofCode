#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(70);
    std::weak_ptr<int> weakPtr = sharedPtr;

    std::cout << "Reference count before reset: " << sharedPtr.use_count() << std::endl;

    weakPtr.reset();  // Reset weak pointer, removing any reference it had to sharedPtr

    std::cout << "Reference count after weak_ptr reset: " << sharedPtr.use_count() << std::endl;

    return 0;
}
