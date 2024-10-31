#include <iostream>

void divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero!";  // Throwing an exception inside a function
    } else {
        std::cout << "Result: " << a / b << std::endl;
    }
}

int main() {
    try {
        divide(10, 0);  // This will throw an exception
    } catch (const char* e) {
        std::cout << "Caught exception: " << e << std::endl;
    }
    return 0;
}
