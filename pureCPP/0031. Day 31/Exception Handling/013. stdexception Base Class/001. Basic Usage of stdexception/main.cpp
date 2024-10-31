#include <iostream>
#include <exception>

int main() {
    try {
        throw std::exception();  // Throwing a basic std::exception
    } catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;
    }
    return 0;
}
