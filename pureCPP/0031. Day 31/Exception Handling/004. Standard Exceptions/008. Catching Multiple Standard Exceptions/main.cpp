#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::out_of_range("Out of range error occurred");
    } catch (const std::invalid_argument& e) {
        std::cout << "Caught invalid_argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Caught out_of_range: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught general exception: " << e.what() << std::endl;
    }
    return 0;
}
