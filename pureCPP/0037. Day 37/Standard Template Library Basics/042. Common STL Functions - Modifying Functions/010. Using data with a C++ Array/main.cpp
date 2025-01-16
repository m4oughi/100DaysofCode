#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {100, 200, 300, 400, 500};

    int* raw = arr.data();
    std::cout << "Accessing elements via raw pointer:\n";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << raw[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
