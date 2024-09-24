#include <iostream>

// Function declaration using auto return type
auto sum(int a, int b) -> int;

int main() {
    auto result = sum(5, 7);  // Function call, auto deduces return type
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

// Function definition using auto return type
auto sum(int a, int b) -> int {
    return a + b;  // Returns integer
}
