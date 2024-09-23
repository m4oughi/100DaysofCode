#include <iostream>
#include <functional>

void performOperation(int a, int b, const std::function<void(int)>& callback) {
    int result = a + b;
    callback(result);
}

int main() {
    performOperation(3, 4, [](int result) {
        std::cout << "Callback Result: " << result << std::endl; // Outputs: Callback Result: 7
    });

    return 0;
}
