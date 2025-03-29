#include <iostream>

struct Rectangle {
    int length, width;

    bool operator==(const Rectangle&) const = default; // Default only `==`
    auto operator<=> (const Rectangle&) const = default; // Default all comparisons
};

int main() {
    Rectangle r1{5, 10}, r2{5, 10}, r3{6, 10};

    std::cout << std::boolalpha;
    std::cout << (r1 == r2) << "\n";  // true
    std::cout << (r1 != r3) << "\n";  // true
    std::cout << (r1 < r3) << "\n";   // true

    return 0;
}
