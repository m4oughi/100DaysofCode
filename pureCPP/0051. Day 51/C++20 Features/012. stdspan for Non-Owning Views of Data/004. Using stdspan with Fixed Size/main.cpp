#include <iostream>
#include <span>

void print(std::span<int, 3> fixed_span) { // Fixed-size span
    for (int value : fixed_span) std::cout << value << " ";
    std::cout << "\n";
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    print(std::span<int, 3>{arr, 3});  // Only first 3 elements

    return 0;
}
