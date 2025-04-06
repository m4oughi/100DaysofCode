#include <iostream>

constexpr int square(int x) {
    return x * x;  // ✅ OK: Single return statement (C++11 restriction)
}

int main() {
    constexpr int result = square(5);
    std::cout << "Square: " << result << '\n';
    return 0;
}
