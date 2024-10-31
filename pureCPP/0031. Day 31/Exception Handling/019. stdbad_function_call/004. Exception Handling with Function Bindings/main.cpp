#include <iostream>
#include <functional>

void sayHello() {
    std::cout << "Hello, World!" << std::endl;
}

int main() {
    std::function<void()> boundFunc;
    try {
        boundFunc();  // This will throw std::bad_function_call
    } catch (const std::bad_function_call& e) {
        std::cout << "Caught std::bad_function_call with bound function: " << e.what() << std::endl;
    }
    return 0;
}
