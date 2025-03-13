#include <iostream>
#include <memory>
#include <utility>

int main() {
    std::unique_ptr<int> ptr1 = std::make_unique<int>(42);
    
    std::unique_ptr<int> ptr2 = std::exchange(ptr1, nullptr); // Transfers ownership
    
    if (!ptr1) std::cout << "ptr1 is now empty.\n";
    if (ptr2)  std::cout << "ptr2 holds value: " << *ptr2 << "\n";

    return 0;
}
