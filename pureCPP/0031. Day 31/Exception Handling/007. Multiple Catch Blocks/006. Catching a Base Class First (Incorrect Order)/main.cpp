#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::out_of_range("Out of range error");
    } catch (const std::logic_error& e) {  // Base class caught first
        std::cout << "Caught logic_error exception: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {  // This block will never be reached
        std::cout << "Caught out_of_range exception: " << e.what() << std::endl;
    }
    return 0;
}
