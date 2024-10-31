#include <iostream>
#include <stdexcept>

void mayThrowMultiple() throw(std::runtime_error, std::logic_error) {
    throw std::logic_error("This function may throw a logic_error or runtime_error");
}

int main() {
    try {
        mayThrowMultiple();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error: " << e.what() << std::endl;
    }
    return 0;
}
