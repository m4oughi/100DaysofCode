#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::invalid_argument("Invalid argument");
    } catch (const std::invalid_argument& e | const std::logic_error& e) {  // C++17 feature
        std::cout << "Caught logic-related exception: " << e.what() << std::endl;
    }
    return 0;
}
