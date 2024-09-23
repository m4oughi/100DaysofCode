#include <iostream>

void performOperation(const std::function<int(int, int)>& operation, int a, int b) {
    std::cout << "Result: " << operation(a, b) << std::endl;
}

int main() {
    performOperation([](int x, int y) {
        return x + y;
    }, 5, 3); // Outputs: Result: 8

    performOperation([](int x, int y) {
        return x * y;
    }, 5, 3); // Outputs: Result: 15

    return 0;
}
