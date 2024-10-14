#include <iostream>
#include <memory>

int main() {
    {
        std::unique_ptr<int> uniqueOwner = std::make_unique<int>(42);
        std::cout << "Unique owner value: " << *uniqueOwner << std::endl;
    }  // Memory is automatically deallocated when `uniqueOwner` goes out of scope.
}
