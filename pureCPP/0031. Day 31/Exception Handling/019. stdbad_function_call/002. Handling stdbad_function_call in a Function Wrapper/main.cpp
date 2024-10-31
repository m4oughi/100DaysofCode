#include <iostream>
#include <functional>
#include <stdexcept>

void invokeFunction(std::function<void()> func) {
    try {
        if (func) {
            func();
        } else {
            throw std::bad_function_call();
        }
    } catch (const std::bad_function_call& e) {
        std::cout << "Caught bad_function_call inside function: " << e.what() << std::endl;
    }
}

int main() {
    std::function<void()> func;  // Empty function
    invokeFunction(func);        // Will catch and handle the exception
    return 0;
}
