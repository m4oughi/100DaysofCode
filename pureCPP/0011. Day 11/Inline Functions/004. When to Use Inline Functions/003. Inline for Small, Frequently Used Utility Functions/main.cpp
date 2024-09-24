#include <iostream>

// Inline utility function to check if a number is even
inline bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    std::cout << "Is 10 even? " << (isEven(10) ? "Yes" : "No") << std::endl; // Output: Yes
    std::cout << "Is 7 even? " << (isEven(7) ? "Yes" : "No") << std::endl;  // Output: No
    return 0;
}
