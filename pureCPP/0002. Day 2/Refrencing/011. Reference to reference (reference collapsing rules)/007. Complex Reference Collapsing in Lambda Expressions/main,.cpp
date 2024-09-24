#include <iostream>

int main() {
    int x = 70;
    auto lambda1 = [x](int &&y) { return x + y; };  // x is captured by value, y is r-value reference

    auto lambda2 = [&](int &&y) { return x + y; };  // x is captured by reference, y is r-value reference

    std::cout << lambda1(30) << std::endl;  // Output: 100
    std::cout << lambda2(30) << std::endl;  // Output: 100 (x is modified if lambda2 modifies x)


    return 0;
}