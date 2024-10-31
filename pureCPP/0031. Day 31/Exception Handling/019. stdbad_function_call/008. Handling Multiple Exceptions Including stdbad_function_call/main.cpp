#include <iostream>
#include <functional>
#include <stdexcept>

void processFunction(std::function<void()> func) {
    try {
        func();  // This will throw std::bad_function_call if func is empty
    } catch (const std::bad_function_call& e) {
        std::cout << "Caught std::bad_function_call: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught std::runtime_error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught generic exception: " << e.what() << std::endl;
    }
}

int main() {
    std::function<void()> emptyFunc = nullptr;
    processFunction(emptyFunc);  // Processing an empty function
    return 0;
}
