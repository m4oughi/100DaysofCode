#include <iostream>

constexpr auto squareLambda = [](int x) { return x * x; };

int main() {
    constexpr int squared = squareLambda(7);
    std::cout << "Square of 7: " << squared << std::endl; // Output: 49
    return 0;
}
