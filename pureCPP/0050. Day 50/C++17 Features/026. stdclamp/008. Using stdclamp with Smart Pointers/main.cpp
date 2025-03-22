#include <iostream>
#include <algorithm>
#include <memory>

int main() {
    auto ptr1 = std::make_unique<int>(50);
    auto ptr2 = std::make_unique<int>(10);
    auto ptr3 = std::make_unique<int>(100);

    // Clamping unique_ptr values
    int clampedValue = std::clamp(*ptr1, *ptr2, *ptr3);
    std::cout << "Clamped Smart Pointer Value: " << clampedValue << "\n"; // Output: 50

    return 0;
}
