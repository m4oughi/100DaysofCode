#include <iostream>
#include <algorithm>

int validateInput(int input) {
    return std::clamp(input, 1, 100); // Ensures input is between 1 and 100
}

int main() {
    std::cout << "Valid Input (50): " << validateInput(50) << "\n";  // Output: 50
    std::cout << "Too High (150): " << validateInput(150) << "\n";  // Output: 100
    std::cout << "Too Low (-10): " << validateInput(-10) << "\n";  // Output: 1

    return 0;
}
