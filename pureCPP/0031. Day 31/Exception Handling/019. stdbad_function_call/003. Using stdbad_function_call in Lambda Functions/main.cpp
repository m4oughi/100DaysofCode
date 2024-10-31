#include <iostream>
#include <functional>

int main() {
    std::function<void()> lambdaFunc = nullptr;  // Empty lambda function
    try {
        lambdaFunc();  // Triggers std::bad_function_call
    } catch (const std::bad_function_call& e) {
        std::cout << "Caught std::bad_function_call from lambda: " << e.what() << std::endl;
    }
    return 0;
}
