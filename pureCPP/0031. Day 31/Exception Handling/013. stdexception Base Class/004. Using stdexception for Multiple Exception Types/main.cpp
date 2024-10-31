#include <iostream>
#include <stdexcept>

void process(int choice) {
    if (choice == 1) throw std::runtime_error("Runtime error occurred");
    else if (choice == 2) throw std::out_of_range("Out of range error");
    else throw std::exception();  // Base exception
}

int main() {
    try {
        process(2);
    } catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;
    }
    return 0;
}
