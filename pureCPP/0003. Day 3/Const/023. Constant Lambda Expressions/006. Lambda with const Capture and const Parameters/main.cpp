#include <iostream>

int main() {
    int value = 60;

    auto lambda = [value](const int param) {
        // value and param are read-only inside this lambda
        std::cout << "Captured value: " << value << ", Parameter value: " << param << std::endl;
    };

    lambda(70); // Prints Captured value: 60, Parameter value: 70
}
