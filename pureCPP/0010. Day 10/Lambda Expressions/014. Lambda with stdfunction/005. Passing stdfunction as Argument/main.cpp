#include <iostream>
#include <functional>

void applyOperation(int a, int b, const std::function<int(int, int)>& operation) {
    std::cout << "Result: " << operation(a, b) << std::endl;
}

int main() {
    std::function<int(int, int)> multiply = [](int a, int b) {
        return a * b;
    };

    applyOperation(4, 5, multiply); // Outputs: Result: 20

    return 0;
}
