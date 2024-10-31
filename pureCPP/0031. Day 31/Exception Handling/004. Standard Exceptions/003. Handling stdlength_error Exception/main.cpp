#include <iostream>
#include <string>
#include <stdexcept>

int main() {
    try {
        std::string str;
        str.reserve(str.max_size() + 1);  // Trying to exceed maximum size
    } catch (const std::length_error& e) {
        std::cout << "Caught length_error exception: " << e.what() << std::endl;
    }
    return 0;
}
