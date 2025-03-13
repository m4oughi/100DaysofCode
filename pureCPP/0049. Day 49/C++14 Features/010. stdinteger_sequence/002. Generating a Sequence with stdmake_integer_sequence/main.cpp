#include <iostream>
#include <utility>

template <typename T, T... Ints>
void printSequence(std::integer_sequence<T, Ints...>) {
    ((std::cout << Ints << " "), ...); // Fold expression (C++17 feature)
    std::cout << std::endl;
}

int main() {
    printSequence(std::make_integer_sequence<int, 5>{}); // Output: 0 1 2 3 4
    return 0;
}
