#include <iostream>
#include <stdexcept>

void process(int choice) {
    if (choice == 1) throw std::logic_error("Logic error occurred");
    if (choice == 2) throw std::out_of_range("Out of range exception");
    throw std::exception();  // Default exception
}

int main() {
    try {
        process(1);  // Try changing the argument to 2 or remove it to throw std::exception
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;  // Catching all other exceptions
    }
    return 0;
}
