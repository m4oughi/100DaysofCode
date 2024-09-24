#include <iostream>

// Overloaded functions
void operate(int a, int b) {
    std::cout << "Sum: " << a + b << std::endl;
}

void operate(double a, double b) {
    std::cout << "Product: " << a * b << std::endl;
}

// Function accepting function pointer
void performOperation(void (*func)(int, int), int x, int y) {
    func(x, y);
}

int main() {
    performOperation(operate, 3, 4);  // Calls operate(int, int)
    return 0;
}
