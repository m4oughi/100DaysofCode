#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    try {
        std::cout << arr.at(10) << std::endl; // This will throw an exception
    } catch (const std::out_of_range& e) {
        std::cout << "Out of range error: " << e.what() << std::endl; // Output: Out of range error
    }

    return 0;
}