#include <iostream>
#include <stdexcept>

int stringToInt(const std::string& str) {
    if (str.empty()) {
        throw std::invalid_argument("Empty string is not a valid integer");
    }
    return std::stoi(str);
}

int main() {
    try {
        stringToInt("");  // Passing an empty string
    } catch (const std::invalid_argument& e) {
        std::cout << "Caught invalid_argument exception: " << e.what() << std::endl;
    }
    return 0;
}
