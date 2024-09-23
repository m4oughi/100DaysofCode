#include <iostream>
#include <functional>

int main() {
    std::function<int(int, int)> sum = [](int a, int b) {
        return a + b;
    };

    std::cout << "Sum: " << sum(10, 15) << std::endl; // Outputs: Sum: 25
    return 0;
}
