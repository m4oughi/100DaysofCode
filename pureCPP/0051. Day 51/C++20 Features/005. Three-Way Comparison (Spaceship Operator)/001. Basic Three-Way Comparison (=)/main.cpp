#include <iostream>
#include <compare>

int main() {
    int a = 10, b = 20;
    auto result = a <=> b;  // Compare using <=> operator

    if (result < 0) std::cout << "a is less than b\n";
    else if (result > 0) std::cout << "a is greater than b\n";
    else std::cout << "a is equal to b\n";

    double x = 3.14, y = 3.14;
    std::cout << ((x <=> y == 0) ? "x and y are equal\n" : "x and y are not equal\n");
}
