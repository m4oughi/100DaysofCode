#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::logic_error("Logic error occurred");
    } catch (const std::logic_error& e) {
        std::cout << "Caught std::logic_error: " << e.what() << std::endl;
    }
    return 0;
}
