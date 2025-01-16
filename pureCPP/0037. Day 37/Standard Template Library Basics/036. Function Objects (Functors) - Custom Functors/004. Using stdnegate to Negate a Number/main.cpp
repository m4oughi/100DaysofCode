#include <iostream>
#include <functional>

int main() {
    std::negate<int> negate; // Predefined functor for negation

    int value = 10;
    std::cout << "Negation of " << value << " is " << negate(value) << "\n";

    return 0;
}
