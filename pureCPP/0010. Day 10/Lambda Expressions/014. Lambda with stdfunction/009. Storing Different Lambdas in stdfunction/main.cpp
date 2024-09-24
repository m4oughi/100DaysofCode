#include <iostream>
#include <functional>
#include <vector>

int main() {
    std::vector<std::function<int(int, int)>> operations;

    operations.push_back([](int a, int b) {
        return a + b;
    });
    operations.push_back([](int a, int b) {
        return a * b;
    });

    std::cout << "Sum: " << operations[0](3, 4) << std::endl;       // Outputs: Sum: 7
    std::cout << "Product: " << operations[1](3, 4) << std::endl; // Outputs: Product: 12

    return 0;
}
