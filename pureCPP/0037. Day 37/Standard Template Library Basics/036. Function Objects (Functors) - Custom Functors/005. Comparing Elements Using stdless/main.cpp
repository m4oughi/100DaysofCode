#include <iostream>
#include <functional>

int main() {
    std::less<int> isLess; // Predefined functor for less-than comparison

    int a = 10, b = 20;
    std::cout << a << " is less than " << b << ": " << std::boolalpha << isLess(a, b) << "\n";

    return 0;
}
