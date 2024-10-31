#include <iostream>
#include <functional>
#include <stdexcept>

int main() {
    std::function<void()> func;  // Empty std::function
    try {
        func();  // This will throw std::bad_function_call
    } catch (const std::bad_function_call& e) {
        std::cout << "Caught std::bad_function_call: " << e.what() << std::endl;
    }
    return 0;
}
