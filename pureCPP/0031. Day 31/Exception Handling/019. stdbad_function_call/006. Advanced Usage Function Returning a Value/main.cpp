#include <iostream>
#include <functional>

int getValue() {
    return 42;
}

int main() {
    std::function<int()> func;  // Empty function that should return int
    try {
        int result = func();  // This will throw std::bad_function_call
    } catch (const std::bad_function_call& e) {
        std::cout << "Caught std::bad_function_call for returning value: " << e.what() << std::endl;
    }
    return 0;
}
