#include <iostream>
#include <functional>

int main() {
    std::function<int(int)> addFive = [](int n) {
        return n + 5;
    };
    std::function<int(int)> multiplyByTwo = [](int n) {
        return n * 2;
    };

    std::function<int(int)> combined = [addFive, multiplyByTwo](int n) {
        return multiplyByTwo(addFive(n));
    };

    std::cout << "Result: " << combined(3) << std::endl; // Outputs: Result: 16 (3 + 5 = 8, 8 * 2 = 16)

    return 0;
}
