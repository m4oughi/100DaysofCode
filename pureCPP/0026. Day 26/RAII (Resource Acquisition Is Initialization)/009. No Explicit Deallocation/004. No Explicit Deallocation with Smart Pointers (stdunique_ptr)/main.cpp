#include <iostream>
#include <memory>

int main() {
    {
        std::unique_ptr<int[]> data = std::make_unique<int[]>(5);
        data[0] = 10;
        std::cout << "Value at index 0: " << data[0] << std::endl;
    }  // Memory is automatically deallocated by `std::unique_ptr`, no `delete` needed.
}
