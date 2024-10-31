#include <iostream>
#include <stdexcept>

void process() {
    try {
        throw std::logic_error("Logic error in process");
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error: " << e.what() << std::endl;
        throw;  // Rethrow only logic_error
    } catch (...) {
        std::cout << "Caught other exception, not rethrowing." << std::endl;
    }
}

int main() {
    try {
        process();
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error in main: " << e.what() << std::endl;
    }
    return 0;
}
