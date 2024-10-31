#include <iostream>

int main() {
    try {
        throw 404;  // Throwing an integer exception
        throw std::runtime_error("Runtime error!");  // This will never be reached
    } catch (int e) {
        std::cout << "Caught integer exception: " << e << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime exception: " << e.what() << std::endl;
    }
    return 0;
}
