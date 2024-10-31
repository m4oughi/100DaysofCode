#include <iostream>
#include <stdexcept>

void process() {
    throw std::overflow_error("Overflow occurred");  // Derived from std::runtime_error
}

int main() {
    try {
        process();
    } catch (const std::overflow_error& e) {
        std::cout << "Caught overflow_error: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;  // Catch any other exceptions
    }
    return 0;
}
