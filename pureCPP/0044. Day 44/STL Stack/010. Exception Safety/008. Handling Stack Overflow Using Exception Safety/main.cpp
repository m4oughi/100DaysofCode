#include <iostream>
#include <stack>
#include <stdexcept>

void recursiveFunction(int count) {
    if (count > 1000) { // Preventing stack overflow
        throw std::runtime_error("Stack overflow risk: Too many recursive calls!");
    }
    recursiveFunction(count + 1);
}

int main() {
    try {
        recursiveFunction(1);
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
