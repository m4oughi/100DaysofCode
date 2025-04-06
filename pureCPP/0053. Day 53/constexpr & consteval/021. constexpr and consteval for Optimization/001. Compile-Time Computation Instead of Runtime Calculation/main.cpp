#include <iostream>

// Compile-time computation
constexpr int square(int x) {
    return x * x;
}

int main() {
    constexpr int result = square(5);  // Computed at compile-time
    std::cout << "Square of 5: " << result << '\n';  
}
