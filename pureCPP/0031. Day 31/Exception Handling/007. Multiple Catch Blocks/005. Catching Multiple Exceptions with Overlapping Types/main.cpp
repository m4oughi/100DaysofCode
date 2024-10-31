#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::out_of_range("Out of range error");  // Throwing derived exception
    } catch (const std::out_of_range& e) {
        std::cout << "Caught out_of_range exception: " << e.what() << std::endl;
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error exception: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Caught an unknown exception" << std::endl;
    }
    return 0;
}
