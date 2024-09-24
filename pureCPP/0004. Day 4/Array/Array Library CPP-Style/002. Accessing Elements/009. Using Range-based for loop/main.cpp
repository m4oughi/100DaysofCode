#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    for (int& elem : arr) {
        elem *= 2; // Modify each element
    }
    
    for (const int& elem : arr) {
        std::cout << elem << " "; // Output: 20 40 60 80 100
    }

    return 0;
}