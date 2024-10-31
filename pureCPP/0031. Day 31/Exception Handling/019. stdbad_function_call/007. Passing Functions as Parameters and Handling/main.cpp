#include <iostream>
#include <functional>

void execute(std::function<void()> func) {
    try {
        func();  // This will throw if func is empty
    } catch (const std::bad_function_call& e) {
        std::cout << "Caught std::bad_function_call in parameterized function: " << e.what() << std::endl;
    }
}

int main() {
    std::function<void()> emptyFunc;  // Empty function
    execute(emptyFunc);  // Passing empty function
    return 0;
}
