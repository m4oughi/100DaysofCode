#include <iostream>

template<typename... Args>
int sum(Args... args) {
    return (args + ...);  // Fold expression for summation
}

int main() {
    std::cout << "Sum of 1, 2, 3: " << sum(1, 2, 3) << std::endl;
    std::cout << "Sum of 4, 5, 6, 7, 8: " << sum(4, 5, 6, 7, 8) << std::endl;

    return 0;
}
