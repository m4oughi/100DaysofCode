#include <iostream>
#include <functional>

void operation() {
    std::cout << "Operation executed!" << std::endl;
}

int main() {
    std::function<void()> func1 = nullptr;  // Empty function
    std::function<void()> func2 = operation;

    try {
        func1();  // This will throw std::bad_function_call
        func2();  // This will work fine
    } catch (const std::bad_function_call& e) {
        std::cout << "Caught std::bad_function_call with multiple functions: " << e.what() << std::endl;
    }

    return 0;
}
