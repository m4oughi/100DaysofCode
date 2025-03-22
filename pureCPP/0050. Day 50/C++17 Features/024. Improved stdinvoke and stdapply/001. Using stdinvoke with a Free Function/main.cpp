#include <iostream>
#include <functional>

int add(int a, int b) {
    return a + b;
}

int main() {
    auto result = std::invoke(add, 3, 5); // Calls add(3, 5)
    std::cout << "Result: " << result << "\n";
    return 0;
}
