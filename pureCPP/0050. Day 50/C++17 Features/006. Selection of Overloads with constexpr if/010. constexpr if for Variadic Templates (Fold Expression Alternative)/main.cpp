#include <iostream>

template <typename... Args>
void printValues(Args... args) {
    if constexpr (sizeof...(args) == 0) {
        std::cout << "No values provided\n";
    } else {
        (std::cout << ... << args) << '\n';
    }
}

int main() {
    printValues();         // Output: No values provided
    printValues(1, 2, 3);  // Output: 123
    return 0;
}
