#include <iostream>
#include <functional>

int main() {
    std::function<int(int)> factorial = [](auto self, int n) -> int {
        return (n <= 1) ? 1 : n * self(self, n - 1);
    };

    std::cout << factorial(factorial, 5) << std::endl; // Outputs: 120
    return 0;
}
